#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Zafeer");
    q.push("Areeb");
    q.push("Yasir");
    cout<<"first Element : "<<q.front();
    return 0;
}