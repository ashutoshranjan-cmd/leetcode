// this is the cpp program to find the digit in the string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string value below"<<endl;
    getline(cin,s);
    string str ="";
    for(int i =0;s[i]!='\0';i++)
    {
        if(isdigit(s[i]))
        {
            str+=s[i];
        }
    }
    cout<<"The numbers inside the string are :"<<str<<endl;
    return 0;
}