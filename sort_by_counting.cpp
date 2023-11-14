// this is the cpp program to sort the string on the basis of their frequency
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string here "<<endl;
    getline(cin,s);
    cout<<"The entered value in the string is given below"<<endl;
    cout<<s<<endl;
    //algorithm to sort the string on the basis of their frequency
    unordered_map<char,int> mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    cout<<"The values inside the map are given below"<<endl;
    for(auto i :mp)
    {
        cout<<i.first<<"and"<<i.second<<endl;
    }
    string str="";
    for(auto i :mp)
    {
        for(int j =0;j<i.second;j++)
        {   
            str+=i.first;
        }
    }
    cout<<str<<endl;
    return 0;

}