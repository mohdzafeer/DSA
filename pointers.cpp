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
   
    
    
    return 0;
}