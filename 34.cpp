#include<iostream>
using namespace std;

int main()
{
    // Printing array
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int arr[n];
    fill_n(arr,n,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    
    return 0;
}

