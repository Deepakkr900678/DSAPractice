#include <iostream>
using namespace std;

void phoneKeypad(string name, string mapping[], int index, int size, string ans)
{
    // base case
    if (index >= size)
    {
        cout << ans << endl;
        return;
    }

    // Recursive call
    int number = name[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        ans.push_back(value[i]);
        phoneKeypad(name, mapping, index + 1, size, ans);
        ans.pop_back();
    }
}

int main()
{
    string name = "23";
    string ans = "";
    int size = name.length();
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;
    phoneKeypad(name, mapping, index, size, ans);
    return 0;
}
