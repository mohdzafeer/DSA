#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    cout << "Your Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapalternate(int arr[], int size)
{
    int first = 0;
    int second = 1;
    while (second < size)
    {
        swap(arr[first], arr[second]);
        first = first + 2;
        second = second + 2;
    }
    printarray(arr, size);
}

int uniqueelement(int arr[], int size)
{
    int zor = 0;
    for (int i = 0; i < size; i++)
    {
        zor = zor ^ arr[i];
    }
    return zor;
}

int main()
{
    int arr[7] = {1, 1, 2, 2, 3, 4, 4};
    printarray(arr,7);
    // swapalternate(arr, 7);
    cout << endl;
    cout << "Unique Element is : " << uniqueelement(arr, 7);
    return 0;
}