#include <iostream>
using namespace std;

// taking array as a input
void inputarray(int arr[], int size)
{

    cout << "Enter Elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

// printing Array
void printarray(int arr[], int size)
{
    cout << "Your Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// searching element in array
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

// reversing Array
void reversearray(int arr[], int start, int end, int size)
{
    cout << "Reversing Array  " << endl;

    // swaping elements of Array
    while (start < end)

    {
        int element = arr[start];
        arr[start] = arr[end];
        arr[end] = element;
        start++;
        end--;
    }

    printarray(arr, size);
}

// Reversing again with diffrent(easy) function
void reverse(int arr[], int size)
{
    cout<<"Reversing using 2nd function"<<endl;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start=start+1;
        end=end-1;
        /* code */
    }

    printarray(arr, size);
}

int main()
{

    int size;
    cout << "Enter size of Array : ";
    cin >> size;
    int arr[1000];
    inputarray(arr, size);
    int key;
    cout << "Enter key : ";
    cin >> key;

    printarray(arr, size);
    cout << endl;

    bool found = search(arr, size, key);

    if (found)
    {
        cout << key << " is present ";
    }
    else
    {
        cout << key << " is absent";
    }

    cout << endl;

    // reversearray(arr, 0, size - 1, size);
    cout << endl;
    reverse(arr, size);

    return 0;
}