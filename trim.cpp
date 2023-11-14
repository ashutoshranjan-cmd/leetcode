#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter  the string value " << endl;
    getline(cin,s);
    string str = "";
    for (int i = s.length()-1; i >= 0; i--)
    {
        // cout<<s[i]<<endl;
        // if (s[i] != ' ')
        // {
        //     int j = i;
        //     while (s[j] != ' ' && j >=0)
        //     {
        //         str += s[j];
        //         j--;
        //     }
        //     break;
        // }
    }
    // str[2]='\0';
    cout<<s.length()<<endl;
    cout << "The length of the last element is "<<str.length()<< endl;
    return 0;
}