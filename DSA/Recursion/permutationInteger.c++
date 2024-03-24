#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(int arr[], int index, int size) {
    // Base case
    if (index >= size) {
        printArray(arr, size);
        return;
    }

    // Recursive case
    for (int j = index; j < size; j++) {
        swap(arr[index], arr[j]);
        solve(arr, index + 1, size);
        swap(arr[index], arr[j]); 
    }
}

int main() {
    int arr[3] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    solve(arr, index, size);
    return 0;
}
