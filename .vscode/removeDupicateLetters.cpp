// this is the cpp program to remove the duplicate from the string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the value in the string"<<endl;
    cin>>s;
    unordered_set<char> st;
    for(int i =0;s[i]!='\0';i++)
    {
        st.insert(s[i]);
    }
    cout<<"The values in the set are given below "<<endl;
    for(auto i : st)
    {
        cout<<i<<endl;
    }
    return 0;
}