#include <iostream>
using namespace std;


// Time complexity of Binary search is O(logn)
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

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
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};
    int key;
    cout << "Enter key : ";
    cin >> key;

    int index = binarysearch(even, 6, key);
    cout << "Index of " << key << " is " << index;

    cout << endl;
    int index2 = binarysearch(odd, 5, key);
    cout << "Index of " << key << " is " << index2;

    return 0;
}