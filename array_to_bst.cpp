// this is the cpp program for the binary search tree
#include<bits/stdc++.h>
using namespace std;
class node{
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
node *createBst( node *root, int value)
{
    node*root_ptr = root;
    node*ptr = new node(value);
    node *temp;
    if(root == NULL)
    {
        root = ptr;
        return root;
    }
    while(root_ptr != NULL)
    {
        if(value == root_ptr->data)
        {
            return root;
        }
        else if(value < root_ptr->data)
        {
            temp = root_ptr;
            root_ptr = root_ptr->left;
        }
        else{
            temp = root_ptr;
            root_ptr = root_ptr->right;
        }
    }
    if(value < temp->data)
    {
        temp->left = ptr;
    }
    else{
        temp->right = ptr;
    }
    return root;
}
void inorder(node *root,vector<int> &v)
{
    if(root != NULL)
    {
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
}
int main()
{
    
    // root = createBst(root,12);
    // root = createBst(root,11);
    // root = createBst(root,10);
    // root = createBst(root,1);
    // root = createBst(root,2);
    int size;
    cout<<"Enter the size below"<<endl;
    cin>>size;

    vector<int> v;
    node *root = NULL;
    cout<<"Enter the values to be stored in the tree"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cin>>value;
        root = createBst(root,value);
    }
    // cout<<"The values inside the tree are given below"<<endl;
    inorder(root,v);
    cout<<"The values in the vector are given below"<<endl;
    for(auto i : v)
    {
        cout<<i<<endl;
    }
    return 0;
}