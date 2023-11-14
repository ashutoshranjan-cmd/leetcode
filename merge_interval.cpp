// this is the cpp program to merge the intervals
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size for the vector" << endl;
    cin >> size;
    vector<vector<int>> intervals;
    cout << "Enter the value in the vector" << endl;
    for (int i = 0; i < size; i++)
    {
        vector<int> temp;
        int size2;
        cout << "Enter the size of the temp vector" << endl;
        cin >> size2;
        for (int j = 0; j < size2; j++)
        {
            int value;
            cout << "Enter value to be stored" << endl;
            cin >> value;
            temp.push_back(value);
        }
        intervals.push_back(temp);
    }

    set<vector<int>> st = {intervals.begin(), intervals.end()};
   
    return 0;
}