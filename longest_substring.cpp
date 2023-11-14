// this is the cpp program for the longest substring
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the value in the string"<<endl;
    getline(cin,s);
    int count =0;
    int max_value=0;
    int i =0;
    string str="";
    while(i<s.length())
    {
        for(int j=0;j<str.length();j++)
        {
            if(s[i]==str[j])
            {
                max_value = max(count,max_value);
                count = 0;
                // i=j;
                str="";
            }
        }
        str+=s[i];
        i++;
        count++;
    }
    cout<<"The length of the maximum substring is"<<max_value<<endl;
    return 0;
}