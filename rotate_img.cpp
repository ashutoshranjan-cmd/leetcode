// this is the cpp program to rotate the image
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> image;
    cout << "Enter the value to be stored in the array " << endl;
    for (int i = 0; i < 3; i++)
    {
        vector<int> value;
        for (int j = 0; j < 3; j++)
        {
            int data;
            cout << "Enter the number below" << endl;
            cin >> data;
            value.push_back(data);
        }
        image.push_back(value);
    }
    cout << "The value stored in the array are given below" << endl;
    for (auto i : image)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}