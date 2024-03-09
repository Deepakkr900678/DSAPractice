#include <iostream>
using namespace std;

bool binarySearch(int arr[], int key, int start, int end)
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
    int key = 5;
    int size = 5;
    int start = 0;
    int end = size - 1;
    bool ans = binarySearch(arr, key, start, end);
    if (ans)
    {
        cout << "Key is found" << endl;
    }
    else
    {
        cout << "Key is not found" << endl;
    }
    return 0;
}
