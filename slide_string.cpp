// this is the cpp program for the sliding window in cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string slide = "";
    vector<vector<string>> vec;
    for (int i =0;i<s.length();i++)
    {
        bool isfound = slide.find(s[i]) != string::npos;
        cout<<isfound<<endl;
        if (isfound)
        {
            vector<string> v;
            v.push_back(slide);
            vec.push_back(v);
            slide.erase();
            cout<<slide<<endl;
            slide += s[i-1];
            slide += s[i];
        }
        else
        {
            slide += s[i];
            // cout<<slide<<endl;
        }
    }
    cout<<slide<<endl;
    vector<string>v;
    v.push_back(slide);
    vec.push_back(v);
    int max_value = 0;
    for (auto i : vec)
    {
        for (auto j : i)
        {
            cout<<j<<endl;
            int length;
            length = j.length();
            max_value = max(max_value, length);
        }
    }
    cout << max_value << endl;
    return 0;
}