#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int first=0;
    int last=n;
    
    while(first<=last)
    {
        int mid = (first + last)/2;

        if(arr[mid] == key)
        {
            return mid + 1;
        }
        else if(arr[mid] > key)
        {
            last = mid - 1;
        }
        else if(arr[mid] < key)
        {
            first = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the sorted array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value to search\n";
    cin>>key;

    cout<<BinarySearch(arr,n,key)<<endl;

    return 0;
}
