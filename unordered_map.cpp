// this is the cpp program to demostrate the unordered graph
#include<bits/stdc++.h>
using namespace std;
void print()
{
    cout<<"not in the list"<<endl;
}
int main()
{
    unordered_map<int,bool> mp;
    for(int i =0;i<5;i++)
    {
        if(!mp[i])
        {
            print();
        }
    }
    return 0;
}