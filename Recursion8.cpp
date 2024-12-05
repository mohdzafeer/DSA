#include<iostream>
using namespace std;

int sum(int *arr, int n)
{
    if (n == 1)
        return arr[0];
    return (arr[0] + sum(arr + 1, n - 1));
}



int getSum(int *arr , int size){
   if(size == 0) {
        return 0;
    }
    if(size == 1)
        return arr[0];
    else{
        int ans = arr[0]+getSum(arr+1,size-1);
        return ans;  
    }    
    
}
int main()
{
    int arr[5]={0,1,2,3,4};
    int size=5;

    cout<<getSum(arr,size);
    return 0;
}