#include<iostream>
using namespace std;

bool LinearSearchByRec(int *arr,int size,int key){
    if(size==0)
        return false;
    
    if(arr[0]==key)
        return true;
    else {
        return LinearSearchByRec(arr+1,size-1,key); 
    }
}

int main()
{
    int arr[5]={0,1,2,3,4};
    int size=5;
    int key=3;

    if(LinearSearchByRec(arr,size,key)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}