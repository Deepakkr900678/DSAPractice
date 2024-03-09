#include <iostream>
using namespace std;

void reverseString(string &name, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // reverse string
    swap(name[start], name[end]);
    start++;
    end--;

    return reverseString(name, start, end);
}

int main()
{
    string name = "abcde";
    int size = name.length();
    int start = 0;
    int end = size - 1;
    reverseString(name, start, end);
    cout << name << endl;
}