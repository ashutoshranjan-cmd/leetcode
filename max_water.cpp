//this is the cpp program to find the container with max water
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    vector<int> nums;
    cout<<"Enter the values in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cout<<"Enter the value to be stored in the array"<<endl;
        cin>>value;
        nums.push_back(value);
    }
    //algorithm to find the max area
    int i =1;
    int j = size;
    // vector<int> area;
    int max_area = INT_MIN;
    while(i<j)
    {
        int temp;
        int height = min(nums[i-1],nums[j-1]);
        int width = j-i;
        temp = height*width;
        // area.push_back(temp);
        max_area = max(max_area,temp);
        if(nums[i-1]<=nums[j-1])
        {
            i++;
        }
        else{
            j--;
        }
        
    }
    // int max_area= INT_MIN;
    // for(auto i : area)
    // {
    //     max_area = max(max_area,i);
    // }
    cout<<"The maximum area is "<<max_area<<endl;
    return 0;
}