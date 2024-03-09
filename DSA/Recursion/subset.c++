#include <iostream>
using namespace std;

void print(int ans[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void subset(int arr[], int index, int size, int ans[], int subsetIndex)
{
    // Base case
    if (index >= size)
    {
        print(ans, subsetIndex);
        return;
    }

    // Exclude
    subset(arr, index + 1, size, ans, subsetIndex);

    // Include
    ans[subsetIndex] = arr[index];
    subset(arr, index + 1, size, ans, subsetIndex + 1);
}

int main()
{
    int arr[3] = {1, 2, 3};
    int index = 0;
    int ans[3]; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int subsetIndex = 0;
    subset(arr, index, size, ans, subsetIndex);
    return 0;
}
