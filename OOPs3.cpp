#include<iostream>
using namespace std;

class A{
    public:
    void speak(){
        cout<<"Speaking for class A"<<endl;
    }
};
class B{
    public:
    void speak2(){
        cout<<"Speaking for class B"<<endl;
    }
};

class C : public A, public B{

};

int main()
{
    C a;
    a.speak();
    
    return 0;
}