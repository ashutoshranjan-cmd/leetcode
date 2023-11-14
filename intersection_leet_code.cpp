// this is the cpp program for the intersection with including repeating elements
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &v1 , vector<int> &v2)
{
    int size1 = v1.size();
    int size2 = v2.size();
    vector<int> v3;
    for(int i =0;i<size1;i++)
    {
        for(int j =0;j<size2;j++)
        {
            if(v1[i]==v2[j])
            {
                v3.push_back(v1[i]);
                for(int k = j;k<size2;k++)
                {
                    v2[k] = v2[k+1];
                }
                for(int l = i;l<size1;l++)
                {
                    v1[l]=v1[l+1];
                }
                v1.pop_back();
                v2.pop_back();
                size2--;
                size1--;
                j--;
                i--;
            }
        }
    }
    return v3;
}
void printArray(vector<int> v)
{
    for(auto i : v)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int size1;
    int size2;
    cout<<"Enter the size for the first array"<<endl;
    cin>>size1;
    cout<<"Enter the size for the second array"<<endl;
    cin>>size2;
    vector<int> v1;
    vector<int> v2;
    cout<<"Enter the value in the first array"<<endl;
    for(int i =0;i<size1;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);

    }
    cout<<"Enter the value in the second array"<<endl;
    for(int i =0;i<size2;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    cout<<"The value stored in the array one are given below"<<endl;
    printArray(v1);
    cout<<"The value stored in the array two are given below"<<endl;
    printArray(v2);
    cout<<"The intersection of the array is given below"<<endl;
    printArray( intersection(v1,v2));
    return 0;
}