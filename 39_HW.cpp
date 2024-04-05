#include <iostream>
using namespace std;

void inputarray(int arr[], int size)
{

    cout << "Enter Elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printarray(int arr[], int size)
{
    cout << "Your Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int sumofarray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter size of Array : ";
    cin >> size;
    int arr[100];
    inputarray(arr, size);
    printarray(arr, size);
    cout << endl;
    cout << "Sum of array is : " << sumofarray(arr, size);

    return 0;
}