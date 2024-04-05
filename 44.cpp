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

int printarray(int arr[], int size)
{
    cout << "Array : [ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

int elementsum(int arr[], int size, int n)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + arr[j] == n)

            {
                cout << arr[i] << " and " << arr[j] << endl;
                arr[i] = arr[j] = INT16_MIN;
            }
        }
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter size of Array : ";
    cin >> size;

    inputarray(arr, size);
    printarray(arr, size);
    cout << endl;
    cout << "Enter number : ";
    int n;
    cin >> n;
    elementsum(arr, size, n);

    return 0;
}