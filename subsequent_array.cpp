// this is the cpp program to print the subsequnet array using the recurssion method
#include<bits/stdc++.h>
using namespace std;
void sub(int ind , vector<int> &temp, int array[],int n)
{
    if(ind == n)
    {
        for(auto i : temp)
        {
            cout<<i<<"  ";
        }
        cout<<endl;
        if(temp.size() == 0)
        {
            cout<<"{}"<<endl;
        }
        return;


    }
        temp.push_back(array[ind]);
        sub(ind+1, temp, array, n);
        temp.pop_back();
        sub(ind+1, temp, array, n);
        
}
int main()
{
    int array[] = {3,1,2};
    int size = 3;
    vector<int> temp;
    sub(0,temp,array,size);
    return 0;
}