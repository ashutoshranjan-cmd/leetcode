// this is the cpp program to find the minimum path sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec;
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    cout<<"Enter the value to be stored in the vector"<<endl;
    for(int i =0;i<size;i++){
        vector<int> v;
        int size2;
        cout<<"Enter the size for the temporary vector"<<endl;
        cin>>size2;
        for(int j=0;j<size2;j++)
        {
            int value;
            cout<<"Enter the value"<<endl;
            cin>>value;
            v.push_back(value);
        }
        vec.push_back(v);
    }
    int sum =0;
    cout<<"The values inside the vector are given below"<<endl;
    for(auto i:vec)
    {
      int min_value = 100000;

        for(auto j :i)
        {
            min_value = min(min_value,j);
            cout<<min_value<<endl;
            cout<<j<<endl;
        }
        sum += min_value;
        cout<<endl;
    }
    cout<<"The minimum sum of the path is "<<sum<<endl;
    return 0;
}