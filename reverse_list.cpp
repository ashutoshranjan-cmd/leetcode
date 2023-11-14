// this is the cpp prgoram to reverse the linked list
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node ( int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *createList(node *head)
{
    int value;
    cout<<"Enter the value to be inserted in the list"<<endl;
    cin>>value;
    node *ptr = new node(value);
    ptr->next = head;
    return ptr;
}
node * reverseList(node * head)
{
    node * current = head;
    node * prev = NULL;
    node * next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    return prev;
}
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
    node *head;
    head = NULL;
    int size;
    cout<<"Enter the size of the linked list "<<endl;
    cin>>size;
    for(int i = 0;i<size;i++)
    {
        head = createList(head);
    }
    cout<<"The values stored in the linked list  are given below"<<endl;
    printList(head);
    // reversing the linked list 
    head = reverseList(head);
    cout<<"The values after reversing the linked list are given below"<<endl;
    printList(head);
    return  0;
}