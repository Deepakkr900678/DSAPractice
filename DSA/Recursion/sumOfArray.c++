#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    // processing
    int remaining = sumOfArray(arr + 1, size - 1);
    int value = arr[0] + remaining;
    // recursive relation
    return value;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = sumOfArray(arr, size);
    cout << ans << endl;
}