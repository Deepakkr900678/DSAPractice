#include <iostream>
using namespace std;

int swapAlternative(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    swapAlternative(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}