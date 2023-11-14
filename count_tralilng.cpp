// this is the cpp program  to count the trailing zeros of the number
#include<bits/stdc++.h>
using namespace std;
//function to calculate the factorial of the number 
int factorial(int n)
{
    if(n == 1|| n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int num;
    cout<<"Enter the number whose trailing zeroes you want to calculate "<<endl;
    cin>>num;
    // algortihm to calculate the number of the tariling zeroes in the factorial value
    int value = factorial(num);
    //storing the digits of the number in the vector
    vector<int> temp;
    while(value != 0)
    {
        int temp_value = value%10;
        temp.push_back(temp_value);
        value= value/10;
    }   
    cout<<"The values stored in the vector are given below"<<endl;
    for(auto i : temp)
    {
        cout<<i<<endl;
    }
    //counting the trailnig zeroes
    return 0;

}