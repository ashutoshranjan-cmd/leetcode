#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec{1,1,2};
    // next_permutation(vec.begin(),vec.end());
    // for(auto i : vec)
    // {
    //     cout<<i<<endl;
    // }
    int fac = 1;
    for(int i =1;i<=vec.size();i++)
    {
        fac = fac*i;
    }
    vector<vector<int>> v;
    for (int i =0;i<fac;i++)
    {
        next_permutation(vec.begin(),vec.end());
        v.push_back(vec);
    }
    for(auto i:v)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}