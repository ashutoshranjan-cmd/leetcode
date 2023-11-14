// this is the cpp program to merge intervals
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    set<int> temp;
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = intervals[i][0]; j <= intervals[i][1]; j++)
        {
            temp.insert(j);
        }
    }
    // cout << "The values in the array are given below" << endl;
    // for (auto i : temp)
    // {
    //     cout << i << endl;
    // }
    vector<int> vec;
    intervals.clear();
    vec.insert(vec.end(),temp.begin(),temp.end());
    vector<int>temp2;
    int count = 0;
    for(int i =0;i<vec.size();i++)
    {
        if(vec[i]+1 == vec[i+1] && count == 0)
        {
            temp2.push_back(vec[i]);
            count =1;
        }
        if(vec[i]+1 != vec[i+1])
        {
            temp2.push_back(vec[i]);
            intervals.push_back(temp2);
            temp2.clear();
            count = 0;
        }
    }
    cout<<"The merged intervals are given below"<<endl;
    for(auto i : intervals)
    {
        for(auto j :i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}