#include<iostream>
using namespace std;

int main()
{
    int num =5;
    int *p = &num;
    cout<<"Num before (*p)++"<<endl;
    cout<<num<<endl;
    (*p)++;
    cout<<"Num after (*p)++"<<endl;
    cout<<num<<endl;
   

//    copying a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    // now both p and q are same pointers

    
    
    return 0;
}