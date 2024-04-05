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

// Eg : Original Array = {1,2,3,4,5,6}
// alternateswaping = {2,1,4,3,6,5}

void alternateswaping(int arr[], int size)
{
    cout<<"Swaping alternate elements"<<endl;
    int start = 0;
    int second = 1;
    while (second < size)
    {
        swap(arr[start], arr[second]);
        start = start + 2;
        second = second + 2;
        /* code */
    }
    printarray(arr, size);
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
    alternateswaping(arr, size);
    return 0;
}