#include <iostream>
using namespace std;

int power(int a)
{
    // base case
    if (a == 0)
    {
        return 1;
    }
    // recursive relation
    return 2 * power(a - 1);
}

int main()
{
    int a;
    cin >> a;
    int ans = power(a);
    cout << ans << endl;
}