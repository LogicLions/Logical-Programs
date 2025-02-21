#include<iostream>
using namespace std;

void PrintArray(int n, int arr[])
{
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<"\t";
    }
}

void SelectionSort(int n, int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        int smallestIdx = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}

int main()
{
    int n=5;

    int arr[] = {4,3,5,1,2};

    SelectionSort(n, arr);
    cout<<"Sorted array is:"<<endl;
    PrintArray(n, arr);

    return 0;
}