#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int number = power(a, b / 2);

    if (b % 2 == 0)
    {
        return number * number;
    }
    else
    {
        return a * number * number;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << ans << endl;
}