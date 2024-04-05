#include<iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reversestring(char ch[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}


int main()
{
    char ch[20];
    cout<<"Enter string ";
    cin>>ch;
    cout<<endl;
    cout<<"Original String : "<<ch;
    cout<<endl;
    int n=getlength(ch);
    reversestring(ch,n);
    cout<<"Reversed String : "<<ch;
   
    return 0;
}