// this is the cpp program to convert string value in to int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<char> v;
    for(int i = 0;i<=9;i++)
    {
        v.push_back(i);
    }
    for(int i =0;i<s.length();i++)
    {
    }
    cout<<stoi(s)<<endl;
    return 0;
}