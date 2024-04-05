#include<iostream>
using namespace std;

/*
AND  &
OR   |
NOT  ~
XOR  ^
*/

int main()
{
    int a , b;
    cout<<"Enter a and b ";
    cin >>a;
    cin >>b;
    cout<<(a&b)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    return 0;
}