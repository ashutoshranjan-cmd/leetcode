// this is the cpp program to check the find method in vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int size;
    cout<<"Enter the size of the vector "<<endl;
    cin>>size;
    cout<<"Enter the element in the vector"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    cout<<"The values in the vector are given below"<<endl;
    for(auto i : v)
    {
        cout<<i<<endl;
    }
    // vector<int>::iterator itr;
    // itr = find(v.begin(),v.end(),1);
    // cout<<"The postion of the entered number is  "<<itr-v.begin()<<endl;

    // int count1;
    // count1 = count(v.begin(),v.end(),1);
    // cout<< count1<<endl;
    map<int,int> mp;
    for(int i=0;i<size;i++)
    {
        mp[i] = v[i];
    }
    cout<<"The value stored in the map are given below"<<endl;
    for(auto i:mp)
    {
        cout<<i.first<<"and"<<i.second<<endl;
    }
    return 0;
}