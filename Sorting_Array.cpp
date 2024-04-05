#include <iostream>
using namespace std;

int inputarray(int arr[], int n)
{
    cout << "Enter elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int sort(int arr[], int n)
{
    for (int j = 0; j < n - 1; ++j)
    {
        int min = j;
        for (int i = j + 1; i < n; ++i)
        {
            if (arr[min] > arr[i])
            {
                min = i;
            }
        }
        if (min != j)
        {
            swap(arr[min], arr[j]);
        }
    }
}

void printarray(int arr[], int n)
{
    cout << "Array is : { ";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << "}";
}
int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    inputarray(arr, n);
    cout << "Your ";
    printarray(arr, n);
    cout << endl;
    sort(arr, n);
    cout << "Printed ";
    printarray(arr, n);
    return 0;
}