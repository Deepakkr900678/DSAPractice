#include <iostream>
using namespace std;

void sayDigits(int n, string digits[])
{
    // Base case
    if (n <= 0)
    {
        return;
    }

    int number = n % 10;
    n = n / 10;
    string value = digits[number];

    sayDigits(n, digits);
    cout << value << " ";
}

int main()
{
    int n;
    cin >> n;
    string digits[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    sayDigits(n, digits);
}