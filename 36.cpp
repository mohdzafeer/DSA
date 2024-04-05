#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getmax(int num[], int n)
{
    // Initial value of max
    int max=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)

        {
            max = num[i];
        }
    }
    return max;
}

int getmin(int num[], int n)
{
    int min=INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)

        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    // int arr[]={2,4,5,6,7,4,3,5,6,7,4};

    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int num[100];
    // Taking input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value : ";
        cin >> num[i];
    }

    cout << "Maximum Value is : " << getmax(num, size) << endl;
    cout << "Minimum Value is : " << getmin(num, size) << endl;

    return 0;
}