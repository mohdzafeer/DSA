#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Zafeer");
    s.push("Areeb");
    s.push("yasir");
    cout << "Size of Stack " << s.size();
    cout << endl;

    cout << "Top Element : " << s.top();
    cout << endl;
    s.pop();
    cout << "Top Element : " << s.top();
    cout << endl;
    cout << "Size of Stack " << s.size();
    return 0;
}