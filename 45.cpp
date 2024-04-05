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

int tripletsum(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    cout << arr[i] << "," << arr[j] << " and " << arr[k] << endl;
                }
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

    int n;
    cout << "Enter number : ";
    cin >> n;
    tripletsum(arr, size, n);

    return 0;
}