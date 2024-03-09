#include <iostream>
using namespace std;

int fibonnacci(int n)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    // Recursive relation
    return fibonnacci(n - 1) + fibonnacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    int ans = fibonnacci(n);
    cout << ans << endl;
}