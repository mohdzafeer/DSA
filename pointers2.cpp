#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,4,6,8,10,12,14,16,18,20};

    cout<<"Address of first element of array is : "<<*arr<<endl;

    cout<<endl;
    cout<<arr<<endl;
    cout<<1[arr]<<endl;
    //IMPORTANT POINT  ----->  arr[i] = i[arr] cuz ,==>  arr[i]=*(arr+i)
    cout<<endl;
    for (int i=0; i<10; i++){
        cout<<"Address of "<<i+1<<"th element is "<<arr+i<<" and value is "<<*(arr+i)<<endl;
    }
    return 0;
}