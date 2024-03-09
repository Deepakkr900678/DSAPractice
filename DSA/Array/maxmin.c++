#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 2, 13, 24, 15};
    int size = 5;
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max " << max << endl;
    cout << "Min " << min << endl;
}