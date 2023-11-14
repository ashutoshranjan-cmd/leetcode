// this is the cpp program for the sliding window demostration
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    int array[size];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "The elements in the array are given below" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    int sum = 0;
    int i = 0, j = 2;
    sum = array[i] + array[i + 1] + array[j];
    while(j!=size)
    {
        cout << "The sum of the sub array index values " << i << " "<< i+1 << " " << j << "is " << sum<<endl;
        sum = sum - array[i];
        i++;
        j++;
        sum = sum + array[j];
    }
    return 0;
}