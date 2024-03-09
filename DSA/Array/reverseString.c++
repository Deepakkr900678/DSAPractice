#include<iostream>
using namespace std;

void solve(string& name) {
    int start = 0;
    int end = name.length() - 1;

    while (start < end) {
        
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }
}

int main() {
    string name = "deepak";
    solve(name);
    cout << name << endl;
    return 0;
}
