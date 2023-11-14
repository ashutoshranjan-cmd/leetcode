#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the values in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The values inside the array are given below"<<endl;
    for(int i =0;i<size;i++){
        cout<<array[i]<<endl;
    }
    //insertion sort
    int key , j;
    for( int i =1 ;i<size;i++)
    {
        key = array[i];
        j = i-1;
        while( j>=0 && key < array[j])
        {
            array[j+1] = array[j];
            j = j-1;

        }
        array[j+1]=key;
    }
    cout<<"The sorted list is given below"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}