#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value;
    cin>>value;
    int temp = log2(value);
    if( value = pow(2,temp))
    {
        cout<<true<<endl;
    }
    else{
        return false;
    }
    return 0;
}