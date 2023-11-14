// this is the cpp program to find the triangular sum of the array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    vector<int> v;
    cout << "Enter the values in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    // printing the triangular sum of the array
    vector<int> prev;
    vector<int> v1;
    prev = v;
    while (size != 1)
    {
        v1.clear();
        for (int i = 0; i < v.size() - 1; i++)
        {
            int temp = v[i] + v[i + 1];
            if(temp > 10)
            {
                temp = temp-10;
            }
            v1.push_back(temp);
        }
        v = v1;
        size--;
    }
   cout<<v1[0]<<endl;
    return 0;
}