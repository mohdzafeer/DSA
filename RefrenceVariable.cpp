#include<iostream>
using namespace std;

void upddate1(int n){
    n++;
    int *p=&n;

    cout<<"Address of Pass by value variable : "<<p<<endl;
}
int upddate2(int& n){
    n++;
    int *p=&n;
    
    cout<<"Address of Refrence Variable : "<<p<<endl;
}

int main()
{
    /*
    int i=5;
    int& j=i;
    cout<<j<<endl;
    i++;
    cout<<i<<" "<<j<<endl;
    j++;
    cout<<i<<" "<<j<<endl;
    int *p1=&i;
    int *p2=&j;
    cout<<p1<<" "<<p2<<endl;
    */

   int n=5;
   cout<<"Original Address of variable : "<<&n<<endl;
   cout<<"Before Updating by pass by value function "<<n<<endl;
   upddate1(n);
   cout<<"After Updating by pass by value function "<<n<<endl;
   cout<<"Before Updating by passing refrence variable  "<<n<<endl;
   upddate2(n);
   cout<<"After Updating by passing refrence variable "<<n<<endl;


    return 0;
}