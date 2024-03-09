#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return true;
        }

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int start = 0;
    int end = size - 1;
    int key = 5;
    bool ans = binarySearch(arr, start, end, key);
    if (ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }
}