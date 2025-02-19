#include<iostream>
using namespace std;

void BubbleSort(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Sorted array in ascending order is:"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
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
    return 0;
}