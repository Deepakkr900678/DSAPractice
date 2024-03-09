#include <iostream>
using namespace std;

void decending(int n)
{
    // Base case
    if (n == 0)
    {
        return;
    }

    // Recursive relation
    decending(n - 1);

    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    decending(n);
}