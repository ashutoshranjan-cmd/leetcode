// this is the cpp program to add two binary numbers
#include<bits/stdc++.h>
using namespace std;
int toBinary(int a)
{
    int r;
    int value =0;
    int i=0;
    while(a != 0)
    {
        r = a%10;
        value += r*pow(2,i);
        a = a/10;
        i++;
    }
    return value;
}
int main()
{
    string a;
    cout<<"Enter the first binary value"<<endl;
    getline(cin,a);
    string b ;
    cout<<"Enter the second binary value"<<endl;
    getline(cin,b);
    // cout<<stoi(a)<<endl;
    // cout<<stoi(b)<<endl;
    cout<<toBinary(stoi(a))<<endl;
    cout<<toBinary(stoi(b))<<endl;
    int v1 = toBinary(stoi(a));
    int v2 = toBinary(stoi(b));
    cout<<v1<<endl;
    cout<<v2<<endl;
    cout<<v1+v2<<endl;

    return 0;
    

}