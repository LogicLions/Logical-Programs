#include<iostream>
using namespace std;

void PrintArray(int n, int arr[])
{
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<"\t";
    }
}

void BubbleSort(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        bool isSwap =false;
        cout<<"Iteration: "<<i+1<<endl;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap) // Optimization if array gets sorted within first iteration or if its already sorted then it will return after first iteration. 
        {
            return;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    BubbleSort(n, arr);
    cout<<"Sorted array is:"<<endl;
    PrintArray(n, arr);

    return 0;
}