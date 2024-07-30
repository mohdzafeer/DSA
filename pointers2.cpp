// #include<iostream>
// using namespace std;

// int main()
// {
    // int arr[10]={2,4,6,8,10,12,14,16,18,20};

    // cout<<"Address of first element of array is : "<<*arr<<endl;

    // cout<<endl;
    // cout<<arr<<endl;
    // cout<<1[arr]<<endl;
    //IMPORTANT POINT  ----->  arr[i] = i[arr] cuz ,==>  arr[i]=*(arr+i)
    // cout<<endl;
    // for (int i=0; i<10; i++){
    //     cout<<"Address of "<<i+1<<"th element is "<<arr+i<<" and value is "<<*(arr+i)<<endl;
    // }

    // int temp[10]={1,2};
    
    // cout<<"Size of temp ("<<temp<<") is "<<sizeof(temp)<<endl;
    // cout<<"Size of *temp ("<<*temp<<") is "<<sizeof(*temp)<<endl;
    // cout<<"size of &temp ("<<&temp<<") is "<<sizeof(&temp)<<endl;

    // int *ptr=&temp[0];
    // cout<<"size of ptr ("<<ptr<<") is "<<sizeof(ptr)<<endl;
    // cout<<"size of *ptr ("<<*ptr<<") is "<<sizeof(*ptr)<<endl;
    // cout<<"size of &ptr ("<<&ptr<<") is "<<sizeof(&ptr)<<endl;

    // return 0;
// }



#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    // arr=arr+1;  This Is Error

    int *ptr=&arr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr;
    return 0;
}