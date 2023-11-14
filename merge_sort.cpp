// this is the cpp program for the merge sort
#include<bits/stdc++.h>
using namespace std;
void merge(int array[],int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high - mid;


    int left[n1];
    int right[n2];

    for(int i =0;i<n1;i++)
    {
        left[i] = array[low +i];
    }
    for(int j =0;j<n2;j++)
    {
        right[j]= array[mid +1+j];
    }
    int i =0;
    int j = 0;
    int k = low;

    while(i< n1 && j < n2 )
    {
        if(left[i] <= right[j])
        {
            array[k]=left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;

    }

    while(i<n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        array[k]=right[j];
        j++;
        k++;
    }
  
}
void mergeSort(int array[], int low, int high)
{
    if(low<high)
    {
        // int mid = low+ (high-low)/2;
        int mid = (high+low)/2;

        mergeSort(array,low, mid);
        mergeSort(array,mid+1,high);
        merge(array,low,mid,high);
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elements in the array"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The value stored in the array are given below"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    int low =0;
    int high = size-1;
    mergeSort(array, low, high);
    cout<<"The sorted array is given below"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}