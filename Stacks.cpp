#include<iostream>
#include <stack>
using namespace std;

class Stack{
    // properties
    private:
    int *arr;
    int top;
    int size;

    // behaviour
    public:
    Stack(int size){
        this->size = size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main()
{
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // cout << "Is stack empty? " << (s.empty()? "Yes" : "No") << endl;
    // cout << "Top element is: " << s.top() << endl;
    // s.pop();
    // cout << "Top element is: " << s.top() << endl;
    // s.pop();
    // cout << "Is stack empty? " << (s.empty()? "Yes" : "No") << endl;


    Stack st(5);
    st.push(10);
    st.push(20);
    cout<<"Top element is: "<<st.peek() << endl;

    return 0;
}