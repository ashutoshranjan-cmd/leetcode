// this is the python program for the pascal triangle
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    vector<vector<int>> v1;
    vector<int> prev;
    for (int i = 0; i <size ;i++)
    {
        vector<int> v2;
        for (int j = 0; j <=i; j++)
        {
            if (j == 0|| j == i)
            {
                v2.push_back(1);
            }
            else 
            {
                int temp = prev[j - 1] + prev[j];
                v2.push_back(temp);
            }
        }
        v1.push_back(v2);
        // prev.clear();
        prev = v2;
    }
    cout << "The values of the pascal triangle are given below" << endl;
    for (auto i : v1)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}