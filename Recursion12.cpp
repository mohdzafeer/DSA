#include <iostream>
using namespace std;

bool isPalindrome(string str, int i, int j)
{

    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        isPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string str = "abcbad";
    if(isPalindrome(str,0,str.length()-1)==true){
        cout<<str<<" is palindrome "<<endl;
    }
    else{
        cout<<str<<" is not palindrome "<<endl;
    }
    return 0;
}