#include<iostream>
using namespace std;

int main()
{
    int arr[5]={0,1,2,3,4};
    char ch[6]="abcde";

    int *pointer=&arr[0];
    cout<<"Pointer is "<<pointer-1<<endl;
    cout<<"Pointer is "<<pointer<<endl;
    cout<<"Pointer is "<<pointer+1<<endl;
    cout<<"Pointer is "<<pointer+2<<endl;
    cout<<"Pointer is "<<pointer+3<<endl;
    cout<<"Pointer is "<<pointer+4<<endl;
    cout<<arr<<endl; 
    cout<<ch<<endl;

    char *c=&ch[0];

    cout<<c;   //This prints the entire string

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;

    return 0;
}