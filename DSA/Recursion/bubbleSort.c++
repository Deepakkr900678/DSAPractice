#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return 0;
    }

    // Recursive relation
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    int remaining = bubbleSort(arr, size - 1);
    return remaining;
}

int main()
{
    int arr[6] = {15, 4, 1, 9, 2, 7};
    int size = 6;
    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}