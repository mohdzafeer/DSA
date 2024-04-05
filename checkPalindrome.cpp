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

bool palindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (lowercase(a[s]) != lowercase(a[e]))
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
    char ch[10] = {'A', 'b', 'c', 'b', 'a'};
    int n = getlength(ch);
    // cout<<lowercase('C');
    // for (int i = 0; i < n; i++)
    // {
    //     if(ch[i]>='A' && ch[i]<='Z')
    //     ch[i] = ch[i] - 'A' + 'a';
    // }
    
    // for (int i = 0; i < n; i++)
    // {
        
    //     cout << ch[i] << " ";
    // }
    cout << endl;
    cout << palindrome(ch, n);
    return 0;
}