#include <iostream>
using namespace std;

int first_occurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans=mid;
            e = mid - 1;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int last_occurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans=mid;
            s = mid + 1;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int arr[6] = {1, 2, 2, 2, 2, 5};
    
    cout<<"First Occurence of 2 is at index : "<<first_occurence(arr,6,2)<<endl;

    cout<<"Last Occurence of 2 is at index : "<<last_occurence(arr,6,2)<<endl;
    int f=first_occurence(arr,6,2);
    int l=last_occurence(arr,6,2);
    cout<<"No. of Occurence of 2 is : "<<l-f+1;
    return 0;
}