#include <iostream>
using namespace std;

int printarray(int arr[], int n)
{
    cout << "Array is : { ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "} " << endl;
}

int bubblesort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    int arr[5] = {3, 5, 1, 4, 2};
    cout << "Original ";
    printarray(arr, 5);
    bubblesort(arr, 5);
    cout << "Bubble Sorted ";
    printarray(arr, 5);
    return 0;
}