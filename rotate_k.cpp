// this is the cpp program to rorate the linked list node in the k nodees
#include<bits/stdc++.h>
using namespace std;
//creating a node class to create the node of the linked list 
class node {
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// creating and inserting the values in the linked list and connecting it to the previous node
node *createNode(node *head)
{
    int value;
    cout<<"Enter the value to be inserted in the node of the linked list "<<endl;
    cin>>value;
    node *ptr = new node(value);
    if(head == NULL)
    {
        ptr->next = NULL;
        return ptr;
    }
    node *ptr2 = head;
    while(ptr2->next!= NULL)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr;
    ptr->next = NULL;
    return head;
}
//printing the values in the linked list 
void printList(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the linked list "<<endl;
    cin>>size;
    node *head = NULL;
    cout<<"Enter the values in the linked list "<<endl;
    for(int i =0;i<size;i++)
    {
        head = createNode(head);
    }
    cout<<"The values stored in the linked list are given below"<<endl;
    printList(head);
    return 0;
}