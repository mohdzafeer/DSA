#include <iostream>
using namespace std;

// XORing
int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        /* code */
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
        /* code */
    }
    cout<<ans;
    return ans;
}

int main()
{
    int arr[6] = {1, 6, 3, 2, 4, 4};
    // unique(arr,6);
    int ans=0;
    for (int i = 0; i < 6; i++)
    {
        ans=ans^arr[i];
        /* code */
    }
    for (int i = 1; i < 6; i++)
    {
        ans=ans^i;
        /* code */
    }
    cout<<ans;
    
    return 0;
}

// ------------DIDN'T UNDERSTAND---------