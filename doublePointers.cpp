#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1; //Koi chnage ni hoga is se

    // *p=*p+1;  //isse change hoga

    **p= **p +1; //isse bhi chnage hoga
}

int main()
{
    int i=1;
    int *p1=&i;
    int **p2=&p1;
    // cout<<*p1<<endl;
    // cout<<p1<<endl;
    // cout<<*p2<<endl;
    // cout<<p2<<endl;
    // cout<<**p2<<endl;

    cout<<"Before update"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After update"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;


    return 0;
}