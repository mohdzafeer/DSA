#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    // updating Array
    arr[0]=30;


    cout<<"Array : ";
    for (int i = 0; i <3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[3]={1,2,3};
    update(arr,3);

    

    return 0;
}