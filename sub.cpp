#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 7;

    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    cout << a;
}