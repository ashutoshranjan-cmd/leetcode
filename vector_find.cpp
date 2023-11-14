// this is the cpp program for the intersection of the two vectors
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1;
    vector<int> vec2;
    int size1;
    int size2;
    cout << "Enter the size for the first vector" << endl;
    cin >> size1;
    cout << "Enter the size for the second vector" << endl;
    cin >> size2;
    cout << "Enter the values for the first vector" << endl;
    for (int i = 0; i < size1; i++)
    {
        int value;
        cin >> value;
        vec1.push_back(value);
    }
    cout<<"Enter the value for the second vector"<<endl;
    for (int i = 0; i < size2; i++)
    {
        int value;
        cin >> value;
        vec2.push_back(value);
    }
    cout<<"The values in the vector one are given below"<<endl;
    for(auto i:vec1)
    {
        cout<<i<<endl;
    }
    cout<<"The values in the vector second are given below"<<endl;
    for(auto j : vec2)
    {
        cout<<j<<endl;
    }
    //algorithm to take intersection of the data in the both vector
    vector<int>result;
   
    return 0;
}