#include<iostream>
using namespace std;

// Global Variables --------------------------------

int global_var = 10; // Global variable


void a(int i){
    cout<<i<<endl;
    global_var+=1;
    cout<<"global variable under a "<<global_var<<endl;
}
void b(int& i){
    cout<<i<<endl;
    cout<<"global variable under b "<<global_var<<endl;
}
int main()
{
    int i=5;
    a(i); // Calls a with i's value
    b(i); // Calls b with i's reference

    return 0;
}