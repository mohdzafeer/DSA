#include <iostream>
using namespace std;

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "Enter Name ";
    cin >> name;
    cout << endl;

    // name[2]='\0';
    cout << "Your name is ";
    cout << name << endl;

    cout << "length of String is : " << getlength(name);

    return 0;
}