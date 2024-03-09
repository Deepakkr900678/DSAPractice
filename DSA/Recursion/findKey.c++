#include <iostream>
using namespace std;

bool isPresent(int arr[], int key, int size)
{
    // Base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remaining = isPresent(arr + 1, key, size - 1);
        return remaining;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 5;
    int size = 5;
    bool ans = isPresent(arr, key, size);
    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
}