// this is the cpp program to find the median of the two array which will be merged
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    int size1;
    int size2;
    cout<<"Enter the size of the vector one "<<endl;
    cin>>size1;
    cout<<"Enter the size of the vector two "<<endl;
    cin>>size2;
    cout<<"Enter the values in the vector one "<<endl;
    for(int i =0;i<size1;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);
    }
    cout<<"Enter the value in the vector two "<<endl;
    for(int i =0;i<size2;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    //merging two array or vector
    // for(int i : v2)
    // {
    //     v1.push_back(i);
    // }
    vector<int> v3;
    v3.insert(v3.begin(),v1.begin(),v1.end());
    v3.insert(v3.end(),v2.begin(),v2.end());
    cout<<"The values after merging is given below"<<endl;
    for(auto i : v3)
    {
        cout<<i<<endl;
    }
    //sorting the merged array
    sort(v1.begin(),v1.end());
    double median;

    if( v1.size()%2 != 0)
    {
        median = (double)(v1[(v1.size()-1 )/2]);
        cout<<"The median value is "<<median<<endl;
    }
    else
    {
        median =  (double)(v1[(v1.size()/2)-1] + v1[v1.size()/2])/2;
        cout<<"The median value is "<<median<<endl;
    }

    return 0;
}