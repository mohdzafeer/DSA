#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int ,string> m;
    m[1]="Zafeer";
    m[2]="Mohmmad";

    m.insert({5,"hELLO"});
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    
    return 0;
}