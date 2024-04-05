#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Max Heap
    priority_queue<int> maxi;

    // Low Heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size : "<<maxi.size();
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    return 0;
}