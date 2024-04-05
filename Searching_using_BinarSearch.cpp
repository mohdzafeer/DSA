#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;
    while (start <= end)

    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (-start + end) / 2;
    }
    return -1;
}

int main()
{
    // Sorted Array : { 2,4,5,7,8}
    // Rotated Array : {7,8,2,4,5}
    // Find index of 4

    int arr[5] = {7, 8, 2, 4, 5};
    int n = 5;
    int k;
    cout<<"Enter key : ";
    cin>>k;
    int pivotelem = pivot(arr, n);
    if (k >= arr[pivotelem] && k <= arr[n - 1])
    {
        cout << "key is at index : " << binarysearch(arr, pivotelem, n - 1, k);
    }
    else
    {
        cout << "Key is at Index : " << binarysearch(arr, 0, pivotelem - 1, k);
    }

    return 0;
}