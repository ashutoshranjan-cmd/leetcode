// this is the cpp program to add two number present in the linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
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
    cout << "Enter the value to be inserted in the linked list" << endl;
    cin >> value;
    node *temp = head;
    node *ptr = new node(value);
    if (head == NULL)
    {
        ptr->next = NULL;
        return ptr;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    return head;
}
void printData(node *head)
{
    while (head != NULL)
    {
        cout << head->data <<endl;
        head = head->next;
    }
}
int number(node *head)
{
    string num="";
    while(head != NULL)
    {
        num+=to_string(head->data);
        head = head->next;
    }
    return stoi(num);
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int size1, size2;
    cout<<"Enter the size of the first linked list"<<endl;
    cin>>size1;
    for(int i =0;i<size1;i++)
    {
        head1 = create(head1);
    }
    cout<<"Enter the size of the second linked list "<<endl;
    cin>>size2;
    for(int i =0;i<size2;i++)
    {
        head2 = create(head2);
    }
    cout<<"The values inside the first linked list is given below"<<endl;
    printData(head1);
    cout<<"The values inside the second linked list is given below"<<endl;
    printData(head2);
    // algorithm to add the values inside the linked list 
    int output = number(head1);
    cout<<output<<endl;

    return 0;


}