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

int insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // ruk jana hai
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[5] = {2, 4, 5, 1, 3};
    cout << "Original ";
    printarray(arr, 5);
    insertionsort(arr, 5);
    cout << "Insertion Sorted ";
    printarray(arr, 5);
    return 0;
}