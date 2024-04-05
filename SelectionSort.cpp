#include <iostream>
using namespace std;

int inputarray(int arr[], int n)
{
    cout << "Enter Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}
int printarray(int arr[], int n)
{
    cout << "Array is : { ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "} " << endl;
}

int selectionsort(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int min = j;
        for (int i = j + 1; i < n; i++)
        {
            if (arr[min] > arr[i])
            {
                swap(arr[min], arr[i]);
            }
        }
    }
}
int main()
{
    int arr[10];
    int n;
    cout << "Enter size of Array : ";
    cin >> n;
    inputarray(arr, n);
    cout << "Your ";
    printarray(arr, n);
    selectionsort(arr, n);
    cout << "Selection Sorted ";
    printarray(arr, n);
    return 0;
}
