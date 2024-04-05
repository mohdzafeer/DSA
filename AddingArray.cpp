#include<iostream>
#include<math.h>
using namespace std;

int sum(int arr[],int m,int brr[],int n)
{
    int i=m-1;
    int j=n-1;
    int k=0;
    int ans=0; 
    while(i>=0 && j>=0 && k<n)
    {
        ans=((arr[k]*pow(10,i)) + (brr[k]*pow(10,j))) + ans;

        i--;
        j--;
        k++;
    }
    cout<<ans;
}

int main()
{
    int arr[4]={7,2,8,4};
    int brr[4]={7,2,8,4};

    sum(arr,4,brr,4);

    return 0;
}