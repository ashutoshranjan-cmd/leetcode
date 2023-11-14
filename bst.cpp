// this is the cpp program for the binary search tree
#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

node *createNode(int value)
{
    node *ptr = new node(value);
    return ptr;
}

node *bst(node *ptr_root,int value)
{
    node *root = ptr_root;
    // int value;
    // cout<<"Enter the value to be insrerted in the tree"<<endl;
    // cin>>value;
    node *ptr = new node(value);
    node * temp;
    // ptr = createNode(value);
    if(root == NULL)
    {
        root = ptr;
        return root;
    }
    while(root != NULL)
    {
        if( value == root->data)
        {
            cout<<"Value can not be inserted as it is already in the binary search tree "<<endl;
            return root ;
        }
        else if (value < root->data)
        {
            temp = root;
            root = root->left;
        }
        else{
            temp = root;
            root = root->right;
        }
    }
    // node *ptr2 = createNode(value);
    if(value < temp->data)
    {
        temp->left = ptr;
    }
    else{
        temp->right = ptr;
    }
    return ptr_root;
}
int main()
{
    node *root = NULL;
    int node;
    cout<<"Enter the total number of the nodes required "<<endl;
    cin>>node;
    vector<int> v;
    cout<<"Enter the value in the array"<<endl;
    for(int i =0;i<node;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    // cout<<"Enter the values to be inserted in the bst"<<endl;
    for(int i =0;i<node;i++)
    {
        root = bst(root,v[i]);
    }
    cout<<"The values stored in the bst are given below "<<endl;
    inorder(root);
    return 0;
}