// this is the cpp program for the binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the element in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"values are given below"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;

    }
    // binary search
    int low = 0;
    int high = size-1;
    int value;
    cout<<"Enter the value to be found"<<endl;
    cin>>value;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(array[mid]== value)
        {
            cout<<true<<endl;
            break;
        }
        if(array[mid]>value)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return 0;
}