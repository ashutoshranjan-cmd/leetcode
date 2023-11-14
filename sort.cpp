#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{5,4,3,2,1};
    for(int i =0;i<v.size()-1;i++)
    {
        for(int j =0;j<v.size()-1;j++)
        {
            if(v[j]>v[j+1])
            {
                int temp;
                temp = v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}
