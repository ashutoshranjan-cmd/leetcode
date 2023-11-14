// this is the cpp program for the closest sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size for the vector"<<endl;
    cin>>size;
    vector<int> vec;
    cout<<"Enter the elements in the vector"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cout<<"Enter value to be stored in the vector"<<endl;
        cin>>value;
        vec.push_back(value);
    }
    cout<<"The values in the vector are given below"<<endl;
    // for(auto i :vec)
    // {
    //     cout<<i<<endl;
    // }
    //algorithm to find the closest sum
    set<vector<int>> st;
    sort(vec.begin(),vec.end());
   for(int i =0;i<size;i++)
    {
        int  j = i+1;
        int k = size-1;
        while(j<k)
        {
            st.insert({vec[i],vec[j],vec[k]});
            j++;
            k--;
        }
    }
    vec.clear();
    for(auto i:st)
    {
        for(auto j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    for(auto i : st)
    {
        int sum;
        sum = accumulate(i.begin(),i.end(),0);
        vec.push_back(sum);
        cout<<endl;
    }
    for(auto i : vec)
    {
        cout<<i<<endl;
    }
    int min_value = INT_MAX;
    for(auto i:vec)
    {
        min_value = min(min_value,abs(i));
    }
    cout<<"closest value is"<<min_value<<endl;
    return 0;
}