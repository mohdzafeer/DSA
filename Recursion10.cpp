#include<iostream>
using namespace std;

bool BinarySearchRec(int *arr, int s ,int e , int key){
    if(s>e){
        return false;
    }

    int mid=(s+e)/2;
    if(arr[mid]==key){
        return true;
    }
    
    
    
    if(arr[mid]<key){
        return BinarySearchRec(arr,mid+1,e,key);
    }
    else{
        return BinarySearchRec(arr,s,mid-1,key);
    }
}

int main()
{
    int arr[5]={0,1,2,3,4};
    int size=5;
    int key=4;

    if(BinarySearchRec(arr,0,4,key)){
        cout<<"found";
    }
    else {
        cout <<"Not Found";
    }
    return 0;
}