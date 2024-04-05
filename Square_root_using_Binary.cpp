#include <iostream>
#include <math.h>
using namespace std;

int inputarray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

int printarray(int arr[], int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";
}

int squarerootbybinary(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (pow(arr[mid], 2) <= key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter Number between 0-400 : ";
    cin >> n;
    // cout<<endl;
    // int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int arr[1000];
    inputarray(arr, n);
    cout << endl;
    // printarray(arr, n);
    cout << endl;
    cout << "Square root of " << n << " is : " << squarerootbybinary(arr, n, n);
    return 0;
}