#include <iostream>
using namespace std;

void inputarray(int arr[], int size)
{
    cout << "Enter Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printarray(int arr[], int size)
{
    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}



int main()
{
    int size;
    cout<<"Enter size of Array : ";
    cin>>size;
    int arr[100];
    inputarray(arr,size);
    printarray(arr,size);

    return 0;
}