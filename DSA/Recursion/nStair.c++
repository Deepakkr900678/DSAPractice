#include <iostream>
using namespace std;

int nStair(int n)
{
    // Base case
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    // Recursive relation
    return nStair(n - 1) + nStair(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int ans = nStair(n);
    cout << ans << endl;
}