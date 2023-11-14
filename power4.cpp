// this is the cpp program to check the power of 4 using bit manipulation
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number here"<<endl;
    cin>>num;
    int temp = num>>2;
    cout<<"The value is : "<<temp;
    return 0;
}