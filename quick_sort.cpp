#include<bits/stdc++.h>
using namespace std;
int partition(int array[], int low , int high)
{
    int pivot = array[high];
    int i = low-1;
    for(int j= low ; j<high;j++)
    {
        if(array[j]< pivot)
        {
            i++;

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    int temp2 = array[i];
    array[i] = pivot;
    // array[i]= array[high];
    array[high] = temp2;
    return i;

}
void quicksort(int array[], int low , int high)
{
    if(low < high)
    {
        int pivot = partition(array,low,high);

        quicksort(array,low,pivot-1);
        quicksort(array,pivot+1,high);
    }
}
int main(){
    int size;
    cout<<"Enter the total element to be entered in the array"<<endl;
    cin>>size;
    int array[size];
    cout<<"Enter the elements below"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>array[i];
    }
    int low = 0;
    int high = size-1;
    quicksort(array,low, high);
    cout<<"The sorted value of the array is given below"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}