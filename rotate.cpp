// this is the cpp program to rotate the the linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next ;
     node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *createNode(node *head)
{
    int value;
    cout<<"Enter the value to be stored in the linked list "<<endl;
    cin>>value;
    node *ptr = new node(value);
    if(head == NULL)
    {
        ptr ->next = NULL;
        return ptr;
    }
    node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next= ptr;
    return head;
}
void printList(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
// node *reverse(node *head,int  k)
// {
//     node *ptr = head;
//     node *tempHead = head;
//     int i =0;
//     while(i!= k)
//     {
//         ptr = ptr->next;
//     }
//     node *current = head;
//     node *prev = NULL;
//     node *after = NULL;
//     while(current != NULL)
//     {
//         after = curret 
//     }
    
// }
node* rotate(node *head  )
{
    node *ptr = head;
    // int value = head->data;
    int prev = head->data;
    int current;
    node *ptr2 = head;
    while(ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    int value = ptr2->data;
    while(ptr->next != NULL)
    {
        // cout<<ptr->data<<endl;
        ptr = ptr->next ;
        current = ptr->data;
        ptr->data = prev;
        prev = current;
        // if(ptr->next->next == NULL)
        // {
        //     value = ptr->next->data;
        // }
    }
    head->data = value;
    return head;
}
int main()
{
    int size;
    cout<<"Enter the size of the linked list "<<endl;
    cin>>size;
    node *head = NULL;
    cout<<"Enter the value to be stored in the linked list "<<endl;
    for(int i=0;i<size;i++)
    {
        head = createNode(head);
    }
    cout<<"The value stored in the linked list are given below"<<endl;
    printList(head);
    // printList(head);
    cout<<"The values after rotating the linked list is given below"<<endl;
    for(int i =0;i<2;i++)
    {
        head = rotate(head);
    }
    printList(head);
    return 0;
}