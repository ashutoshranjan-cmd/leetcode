// this is the cpp program to remove the duplicate items from the list incluing the number itslef
#include <bits/stdc++.h>
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
node  *createList(node *head)
{
    int value;
    cout<<"Enter the value to be inserted in the linked list"<<endl;
    cin>>value;
    node *ptr = new node(value);
    ptr ->next = head;
    return ptr;
}
void printList(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
node *removeDuplicate(node *head)
{
    node *ptr1;
    node *ptr2 ;
    ptr1 = head;
    ptr2 = head->next;

    if(head->data == head ->next->data)
    {
        while(head->data == head ->next ->data)
        {
            head = head -> next;
        }
        head = head->next;
        return head;
    }
    while(ptr2->next != NULL)
    {
        if(ptr2->data == ptr2->next->data)
        {
            while( ptr2->next != NULL)
            {
                if(ptr2->data != ptr2->next->data)
                {
                    ptr1->next = ptr2->next;
                    return head;
                }
                ptr2 = ptr2->next;
            }
             ptr1->next = NULL;

            break;
        }
        ptr1 = ptr1->next;
        ptr2= ptr2->next;q
    
    }

     return head;

}
int main(){
    node *head;
     head = NULL;
     int size;
     cout<<"Enter the size of the linked list"<<endl;
     cin>>size;
     for(int i =0;i<size;i++)
     {
        head = createList(head);
     }
     cout<<"The values in the list are given below"<<endl;
     printList(head);
     cout<<"The values after removing the duplicates from the list are given below"<<endl;
     for(int i=0;i<size-1;i++)
     {
        head = removeDuplicate(head);
     }
    
     printList(head);
     return 0;
}