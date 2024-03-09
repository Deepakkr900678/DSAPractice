#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // left and right wala part smbhal lete h

    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }

    // partition kare
    int p = partition(arr, start, end);

    // left part sort karo
    quickSort(arr, start, p - 1);

    // right part sort karo
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[5] = {2, 1, 5, 3, 9};
    int size = 5;
    int start = 0;
    int end = size - 1;
    quickSort(arr, start, end);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}