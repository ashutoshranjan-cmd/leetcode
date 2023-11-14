#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> temp;
    for(int i =0;i<9;i++)
    {
        char val = char(48+i);
        temp.push_back(val);
    }
    cout<<"The values are given below"<<endl;
    for(auto i:temp)
    {
        cout<<i<<endl;
    }
    return 0;
}