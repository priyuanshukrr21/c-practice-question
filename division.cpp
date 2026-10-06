#include <iostream>
using namespace std;

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int divide(int a, int b) {
    int quotient = 0;

    while (a >= b) {
        a = subtract(a, b);
        quotient++;
    }

    return quotient;
}

int main() {
    int a = 20, b = 4;

    cout << "Quotient = " << divide(a, b);

    return 0;
}