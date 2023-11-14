// this is the cpp program to demostrate the random function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // srand(time(0));
    for(int i =0;i<4;i++)
    {
        cout<<rand()%123<<endl;
    }
    return 0;
}