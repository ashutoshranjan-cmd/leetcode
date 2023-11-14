#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    vector<int> t;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cin>>value;
        t.push_back(value);
    }
    cout<<"The values in the array are given below"<<endl;
    for(auto  i:t)
    {
        cout<<i<<endl;
    }
    if(!t[1])
    {
        cout<<t[10]<<endl;
    }
    return 0;
}