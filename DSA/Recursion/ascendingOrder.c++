#include <iostream>
using namespace std;

void ascending(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive relation
    return ascending(n - 1);
    cout << n << " ";

}

int main()
{
    int n;
    cin >> n;
    ascending(n);
}