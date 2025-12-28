#include <iostream>
using namespace std;
char tolowcase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp;
        temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(string x)
{
    int i = 0;
    int e = x.length() - 1;
    while (i <= e)
    {
        if (!isalnum(x[i]))
        {
            i++;
        }
        else if (!isalnum(x[e]))
        {
            e--;
        }
        if (tolowcase(x[i]) != tolowcase(x[e]))
        {
            return false;
        }
        else
        {
            i++;
            e--;
        }
        return true;
    }
}
int main()
{
    string usrinpt;
    cout << "Enter the string to check valid palindrome :: ";
    cin >> usrinpt;

    string corrected;
    int j = 0;
    for (int i = 0; i < usrinpt.length(); i++)
    {
       if(isalnum(usrinpt[i])){
        corrected.push_back(usrinpt[i]);
       }
    }
    cout<<corrected;
    cout << "Ans. ::" << checkpalindrome(corrected);
    return 0;
}