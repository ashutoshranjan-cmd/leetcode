// // this is the cpp pgrogram for the duplicate in the array
// // this is the cpp program for the sliding window demostration
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "Enter the size of the array" << endl;
//     cin >> size;
//     int array[size];
//     cout << "Enter the elements in the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "The elements in the array are given below" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << endl;
//     }
//     int sum = 0;
//     int i = 0, j = 2;
//     int k ;
//     cout<<"Enter the value for the k"<<endl;
//     cin>>k;
//     for(int i =0;i<k+1;i++)
//     {
//         sum += array[i];
//     }
//     for(int i =0;i<size-k;i++)
//     {
//         int j = k+i+1;
//          map<int,int> mp;
//         for(int l =i;l<j;l++)
//         {
//             mp[array[l]]++;
//             if(mp[array[l]]>1)
//             {
//                 cout<<true<<endl;
//             }
            


//         }
//         sum -= array[i];
//         j++;
//         sum += array[j];
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size1, size2;
    cout<<"Enter the size of the first array"<<endl;
    cin>>size1;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    vector<int> v1;
    vector<int> v2;
    cout<<"Enter the values for the first array"<<endl;
    for(int i =0;i<size1;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);
    }
    cout<<"Enter the values for the second array"<<endl;
    for(int i =0;i<size2;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    vector<int>  v3;
    vector<int>:: iterator itr1;
    vector<int>:: iterator itr2;
    for(auto itr1 = v1.begin(); itr1  != v1.end();itr1++)
    {
        for(auto itr2 = v2.begin();itr2 != v2.end();itr2++)
        {
            if(*itr1 == *itr2)
            {
                v3.push_back(*itr1);
                v1.erase(itr1);
                // v2.erase(itr2);
            }
        }
    }
    cout<<"The intersection of the given array is given below"<<endl;
    for(auto i : v3)
    {
        cout<<i<<endl;

    }
    return 0;

}