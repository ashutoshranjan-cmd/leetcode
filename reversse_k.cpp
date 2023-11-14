// this is the cpp program to reverse the k node  in the list
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
node *create(node *head)
{
    int value;
    cout<<"Enter the value to be stored in the list "<<endl;
    cin>>value;
    node *ptr = new node(value);
    ptr->next = head;
    return ptr;

}
void print(node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
node *reverse(node *head ,node *temp_head)
{
    node *current = head;
    node * prev = NULL;
    node * after = NULL;
    while(current != temp_head)
    {
        after = current->next;
        current->next = prev;

        prev = current;
        current = after;
    }
    return prev;
}
node *counter(node *head ,int k)
{
    node * ptr = head;
    int i =0;
    while(i <= k)
    {
        ptr= ptr->next;
        i++;
    }
    return ptr;
}
int main()
{
    int size;
    cout<<"Enter the size for the linked"<<endl;
    cin>>size;
    node *head = NULL;
    cout<<"Enter the value in the linked list "<<endl;
    for(int i =0;i<size;i++)
    {
        head = create(head);
    }
    cout<<"The value stored in the linked list are given below"<<endl;
    print(head);
    cout<<"The values after reversing the linked list are given below"<<endl;
    // head = reverse(head);
    node *temp_head = counter(head,2);
    head = reverse(head,temp_head);
    print(head);
    return 0;
}