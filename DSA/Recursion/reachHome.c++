#include <iostream>
using namespace std;

void reachHome(int dest, int n)
{
    // Base case
    if (n == dest)
    {
        cout << "Pahuch Gaya" << endl;
        return;
    }

    // Recursive relation
    return reachHome(dest, n + 1);
}

int main()
{
    int dest = 10;
    int n = 1;
    reachHome(dest, n);
}