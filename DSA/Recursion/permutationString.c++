#include <iostream>
using namespace std;

void solve(string &name, int index, int size)
{
    // Base case
    if (index >= size)
    {
        cout << name << endl;
        return;
    }

    // Recursive case
    for (int j = index; j < size; j++)
    {
        swap(name[index], name[j]);
        solve(name, index + 1, size);
        swap(name[index], name[j]);
    }
}

int main()
{
    string name = "abc";
    int index = 0;
    int size = name.length();
    solve(name, index, size);
    return 0;
}
