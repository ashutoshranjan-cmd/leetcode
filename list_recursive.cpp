// this is the cpp program for the linked list traversal using recurrsion
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *createNode(node *head)
{
    int value;
    cout<<"Enter values here : "<<endl;
    cin>>value;
    node *ptr = new node(value);
    ptr->next = head;
    return ptr;
}
//traversing the linked list using recurrsion 
void printList(node *head)
{
    if(head == NULL)
    {
        return;
    }
    cout<<head->data<<endl;
    printList(head->next);
}
int main()
{
    int size;
    cout<<"Enter the size of the linked list "<<endl;
    cin>>size;
    node *head = NULL;
    cout<<"Enter the element in the linked list"<<endl;
    for(int i =0;i<size;i++)
    {
        head = createNode(head);
    }
    cout<<"The values inside the linked list are given below"<<endl;
    printList(head);
    return 0;
}