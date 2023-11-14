// this is the cpp program for the 2d linked list in cpp
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *down;
    node *right;
    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->down = NULL;
    }
};
node *createNode(node *head)
{
    int value;
    cout<<"Enter the value to be inserted in the linked list "<<endl;
    cin>>value;
    node *ptr = new node(value);
    if(head == NULL)
    {
        ptr->down = NULL;
        return ptr;
    }
    node *temp = head;
    while(temp->down != NULL)
    {
        temp = temp->down;
    }
    temp->down = ptr;
    ptr->down = NULL;
    return head;
    
}
node *createNodeRow(node *head)
{
    int value;
    cout<<"Enter the value to be inserted in the linked list "<<endl;
    cin>>value;
    node *ptr = new node(value);
    if(head == NULL)
    {
        ptr->right = NULL;
        return ptr;
    }
    node *temp = head;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    temp->right = ptr;
    ptr->right = NULL;
    return head;
    
}
void printlist(node *head)
{
    node *temp = head;
    while(temp != NULL)
    {
        node *temp2 = temp;
        while(temp2 != NULL)
        {
            cout<<temp2->data<<" ";
            temp2 = temp2->right;
        }
        cout<<endl;
        temp = temp->down;
    }
}
int main()
{
    int row;
    int col;
    cout<<"Enter the number of the row for the 2d list"<<endl;
    cin>>row;
    cout<<"Enter the number of the column for the 2d list"<<endl;
    cin>>col;
    node *head= NULL;
    cout<<"Enter the values for the column 0 of the 2d list"<<endl;
    for(int i = 0 ;i<col;i++)
    {
        head = createNode(head);
    }
    cout<<"Enter the value in the row"<<endl;
    node*temp = head;
    while(temp != NULL)
    {
        for(int  i=0;i<row;i++)
        {
            temp = createNodeRow(temp);
        }
        temp = temp->down;
    }
    cout<<"Printing the values inside the 2d linked list"<<endl;
    printlist(head);
    return 0;

   
}