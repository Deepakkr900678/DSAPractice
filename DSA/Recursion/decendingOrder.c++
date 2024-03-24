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
    cout << n << " ";

    decending(n - 1);

}

int main()
{
    int n;
    cin >> n;
    decending(n);
}