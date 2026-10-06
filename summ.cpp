#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }

    cout << "Sum = " << a;
    return 0;
}