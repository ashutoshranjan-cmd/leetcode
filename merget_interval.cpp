// this is the cpp program to merge the interval
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int size2;
        cin>>size2;
        vector<int> temp;
        for(int j =0;j<size2;j++)
        {
        int value;
        cin>>value;
        temp.push_back(value);
        }
        vec.push_back(temp);
    }
    set<int>temp;
    for(int i =0;i<vec.size();i++)
    {
        for(int j = vec[i][0]; j<= vec[i][vec[i].size()-1];j++)
        {
            temp.insert(j);
        }
    }

    cout<<"The numbers in the set are given below"<<endl;
    for(auto i : temp)
    {
        cout<<i<<endl;
    }
    return 0;
}