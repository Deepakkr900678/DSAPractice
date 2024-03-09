#include <iostream>
using namespace std;

void subsequence(string name, int size, int index, string output)
{
    // Base case
    if (index >= size)
    {
        cout << output << endl;
        return;
    }

    // Exclude
    subsequence(name, size, index + 1, output);

    // include
    char element = name[index];
    output.push_back(element);
    subsequence(name, size, index + 1, output);
}

int main()
{
    string name = "abc";
    int size = name.length();
    int index = 0;
    string output = "";
    subsequence(name, size, index, output);
}
