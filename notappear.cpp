// this is the cpp program to show the list of the number not appear in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    set<int>s;
    for(int i =0;i<size;i++)
    {
        int value;
        cin>>value;
        s.insert(value);
    }  
    vector<int>v;
    set<int>::iterator itr;
    itr = s.begin();
    int temp =1;
    for(int i =0;i<size;i++)
    {
        if(temp == *itr)
        {
            itr++;
        }
        else
        {
            v.push_back(temp);
        }
        temp++;
    }


    cout<<"The value is"<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }

    return 0;
}