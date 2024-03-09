#include <iostream>
using namespace std;

int reverseArray(int arr[], int start, int end)
{
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int start = 0;
    int end = size - 1;
    reverseArray(arr, start, end);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}