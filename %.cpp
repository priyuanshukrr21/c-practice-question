#include <iostream>
using namespace std;

int main() {
    int n = 8;

    if (n & 1)
        cout << "Odd";
    else
        cout << "Even";
}