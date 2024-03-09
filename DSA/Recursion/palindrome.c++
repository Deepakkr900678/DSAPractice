#include <iostream>
using namespace std;

bool palindrome(string name, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (name[start] == name[end])
    {
        start++;
        end--;
        return true;
    }
    else
    {
        return false;
    }
    return palindrome(name, start, end);
}

int main()
{
    string name = "BOOK";
    int start = 0;
    int end = name.length() - 1;
    bool ans = palindrome(name, start, end);
    if (ans)
    {
        cout << "Name is palindrome" << endl;
    }
    else
    {
        cout << "Name is not palindrome" << endl;
    }
}