#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)

    {
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (arr[mid] < key)
        {
            start = arr[mid] + 1;
        }
        else if (arr[mid] > key)
        {
            end = arr[mid] - 1;
        }

        mid = start + (-start + end) / 2;
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 7;
    cout<<binarysearch(arr, 5, key);

    return 0;
}