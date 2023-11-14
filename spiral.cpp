// this is the cpp program for spiral matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout << "Enter the size of the row " << endl;
    cin >> row;
    int column;
    cout << "Enter the size of the column" << endl;
    cin >> column;
    vector<vector<int>> matrix;
    cout << "Enter the value in the matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp;
        for (int j = 0; j < column; j++)
        {
            int value;
            cin >> value;
            temp.push_back(value);
        }
        matrix.push_back(temp);
    }
    cout << "The matrix values are given below" << endl;
    for (auto i : matrix)
    {
        for (auto j : i)
        {
            cout << j;
        }
        cout << endl;
    }
    vector<int> ans;
    int top = 0;
    int left = 0;
    int right = column - 1;
    int bottom = row - 1;
    // algorithm for the spiral matrix
    while (top <= bottom && left<= right)
    {

        for (int j = left; j <= right; j++)
        {
            ans.push_back(matrix[top][j]);
        }

        top++;
        for (int j = top; j <= bottom; j++)
        {
            ans.push_back(matrix[j][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int j = bottom; j >= top; j--)
            {
                ans.push_back(matrix[j][left]);
            }
            left++;
        }
    }
    cout << "The value is given below" << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}