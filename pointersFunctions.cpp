#include<iostream>
using namespace std;


void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p=p+1;
    // cout<<"updated Address Value : "<<p<<endl;
    *p=*p+1;
    cout<<"Updated Value : "<<*p<<endl;
}

int getsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum + arr[i];
    }
    return sum;
}
int main()
{
    int value=5;
    int *p=&value;

    print(p);
    cout<<"Before update : "<<p<<endl;
    update(p);
    // cout<<"After update : "<<p<<endl;
    // print(p);

    int arr[6]={1,2,3,4,5,6};
    cout<<"Sum is : "<<getsum(arr+2,4);

    return 0;
}