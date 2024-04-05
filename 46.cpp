#include <iostream>
using namespace std;

void inputarray(int arr[], int size)
{
    cout << "Enter " << size << " elements of Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void sortzerone(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int printarray(int arr[], int size)
{
    cout << "Sorted Array : [ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter size : ";
    cin >> size;

    inputarray(arr, size);
    sortzerone(arr, size);
    printarray(arr, size);
    return 0;
}