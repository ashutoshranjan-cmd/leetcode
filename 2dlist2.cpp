// this is the cpp program to create the 2d linked list in cpp
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *right;
    node *down;
    node (int data)
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
        ptr->right = NULL;
        return ptr;
    }
    node *temp = head;
    while(temp->right != NULL)
    {
        temp = temp->right;

    }
    temp->right = ptr;
    return head;
}
void printList(node *head)
{
    
}
int main()
{
    node *head = NULL;
    int row, col;
    cout<<"Enter the number of the rows "<<endl;
    cin>>row;
    cout<<"Enter the number of the column"<<endl;
    cin>>col;
    for(int i =0;i<row;i++)
    {
        head = createNode(head);
    }
}