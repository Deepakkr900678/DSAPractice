#include <iostream>
using namespace std;

bool isSorted(int arr[], int size, int index)
{
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    if (arr[index + 1] < arr[index])
    {
        return false;
    }

    // recursive relation
    return isSorted(arr, size - 1, index + 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = arr[0];
    bool ans = isSorted(arr, size, index);
    if (ans)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Array is not Sorted" << endl;
    }
}