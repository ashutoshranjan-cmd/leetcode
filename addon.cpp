// leet code question plus one
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    vector<int> v;
    cout<<"Enter the value in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    v[size-1] =v[size-1]+1;
    while(v[size-1]>=10)
    {
        v[size-1] = v[size-1]%10;
        v[size-2] = v[size-2]+1;
        size--;
    }
    cout<<"The final output is "<<endl;
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}