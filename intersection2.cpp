// this is the cpp program to find the intersection of the two array using vector
#include<bits/stdc++.h>
using namespace std;
void printValue(vector<int> &v)
{
    for(auto i : v)
    {
        cout<<i<<endl;
    }
}
vector<int> removeDupliacte(vector<int> v)
{
    for(int i =0;i<v.size();i++)
    {
        for(int j =i+1;j<v.size();j++)
        {
            if(v[i]== v[j])
            {
                for(int k =j;k<v.size();k++)
                {
                    v[k]= v[k+1];                    
                }
                j--;
                v.pop_back();
            }
        }
    }
    // cout<<"The values after the removal of the duplicate is "<<endl;
    // printValue(v);
    return v;

}
void intersection(vector<int> &v1, vector<int> &v2)
{
    vector<int>v3;
    for(auto i : v1)
    {
        for(auto j : v2)
        {
            if(i == j)
            {
                v3.push_back(i);
            }
        }
    }
     v3 = removeDupliacte(v3);
    cout<<"The value stored in the 3rd vector is "<<endl;
    printValue(v3);
}
int main()
{
    int size1;
    int size2;
    cout<<"Enter the size of the array 1"<<endl;
    cin>>size1;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    vector<int> v1;
    vector<int> v2;
    cout<<"Enter the element for the array 1"<<endl;
    for(int i =0;i<size1;i++)
    {
        int value ;
        cin>>value;
        v1.push_back(value);
    }
    cout<<"Enter the elements for the second array"<<endl;
    for(int i =0;i<size2;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    // cout<<"The elements in the array 1"<<endl;
    // printValue(v1);
    // cout<<"The elements in the array 2"<<endl;
    // printValue(v2);
    intersection(v1, v2);
    return 0;
}