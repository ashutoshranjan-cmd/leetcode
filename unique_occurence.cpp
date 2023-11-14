// this is the cpp program for the unique occurence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    cout<<"Enter the element in the vector"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cout<<"Enter the value to be inserted in the array"<<endl;
        cin>>value;
        arr.push_back(value);
    }
    cout<<"The values in the array"<<endl;
    for(auto i:arr)
    {
        cout<<i<<endl;
    }
    //algorithm to find the unique occurence in the array
    vector<int> temp;
    int count =0;
    sort(arr.begin(),arr.end());
    for(int i =0;i<size-1;i++)
    {
        if(arr[i] != arr[i-1])
        {
            count++;
            temp.push_back(count);
            count =0;
            if(i < size-2)
            {
                continue;
            }
            
        }
        count++;
    }
    temp.push_back(count);
    cout<<"The values in the temp array are given below"<<endl;
    for(auto i :temp)
    {
        cout<<i<<endl;
    }
    for(int i =0;i<temp.size()-1;i++)
    {
        if(temp[i] == temp[i+1])
        {
            cout<<false;
        }

    }
    cout<<true;
    return 0;

}