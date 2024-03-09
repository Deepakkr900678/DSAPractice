#include <iostream>
using namespace std;

bool findKey(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    int size = 5;
    bool ans = findKey(arr, size, key);
    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }
}