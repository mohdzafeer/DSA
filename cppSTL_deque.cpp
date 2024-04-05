#include<iostream>
#include<deque>

using namespace std;

int main()
{   
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }

    // d.pop_front();
    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<"First Index Element "<<d.at(1);
    cout<<"Front "<<d.front();
    cout<<endl;
    cout<<"Back "<<d.back();

    cout<<endl;
    cout<<"Empty or not "<<d.empty();
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    return 0;
}