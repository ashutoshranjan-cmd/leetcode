#include<bits/stdc++.h>
using namespace std;
void printArray(int array[],int size)
{
    for(int i = 0 ;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
}
int removeDuplicate(int array[],int size)
{
    for(int i = 0;i<size;i++)
    {
        for(int j = i+1 ;j<size;j++)
        {
            if(array[i]==array[j])
            {

                for(int k =j;k<size;k++)
                {
                    array[k]=array[k+1];
                }
                j--;
                size--;
            }
        }
    }
    //  printArray(array,size);
    return size;

}
void intersection(int array1[], int array2[],int size1, int size2)
{
    size1 = removeDuplicate(array1,size1);
    size2 = removeDuplicate(array2,size2);
    int size3;
    if (size1<=size2){
        size3 = size1;
    }
    else{
        size3 = size2;
    }
    int k=0;
    int array3[size3];
    for(int i =0;i<size1;i++)
    {
        for(int j = 0;j<size2;j++)
        {
            if(array1[i] == array2[j])
            {
                array3[k]=array1[i];
                k++;
            }
        }
    }
    cout<<"The intersection of the array is given below"<<endl;
    size3 = (array3,size3);
    printArray(array3,size3);

}
int main()
{
    int size1;
    int size2;
    cout<<"Enter the size of the array 1"<<endl;
    cin>>size1;
    cout<<"Enter the size of the array 2"<<endl;
    cin>>size2;
    int array1[size1];
    int array2[size2];
    cout<<"Enter the elements for the array 1"<<endl;
    for(int i =0;i<size1;i++)
    {
        cin>>array1[i];
    }
    cout<<"Enter the elements for the array2"<<endl;
    for(int i =0;i<size2;i++)
    {
        cin>>array2[i];
    }
    cout<<"The value stored in the array 1 are given below"<<endl;
    printArray(array1,size1);
    cout<<"The value stored in the array2 are given below "<<endl;
    printArray(array2,size2);
    intersection(array1,array2,size1, size2);
    return 0;
}