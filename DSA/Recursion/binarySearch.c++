#include <iostream>
using namespace std;

bool binarySearch(int arr[], int key, int start, int end)
{
    // Base case
    int mid = start + (end - start) / 2;

    if (start > end)
    {
        return false;
    }

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        //Search in right part
        return binarySearch(arr, key, mid + 1, end);
    }
    else
    {
        //Search in left part
        return binarySearch(arr, key, start, mid - 1);
    }
}

int main()
{
    int arr[6] = {2, 5, 6, 8, 14, 18};
    int size = 6;
    int key = 22;
    int start = arr[0];
    int end = size - 1;
    bool ans = binarySearch(arr, key, start, end);
    if (ans)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}