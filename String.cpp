#include <iostream>
using namespace std;

int lengthofstring(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
        /* code */
    }
    return count;
}

void reversestring(char arr[], int n)
{
    int i = 0;
    int j = n;
    while (i < j)
    {
        swap(arr[i], arr[j - 1]);
        i++;
        j--;
        /* code */
    }
}
char lowercase(char ch)
{
    
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}

bool palindrome(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (lowercase(arr[s]) != lowercase(arr[e]))
        {
            return 0;
        }
        else 
        {
            s++;
            e--;
        }
    }
    return 1;
}





int main()
{
    char name[20];
    cout << "Enter Name ";
    cin >> name;
    cout << "Length of name is " << lengthofstring(name);
    int n = lengthofstring(name);
    reversestring(name, n);
    cout << endl;
    cout << "Reverse String is " << name;
    cout << endl;
    
    cout << "Plaindrome : " << palindrome(name, n);
    cout << endl;
    

    return 0;
}