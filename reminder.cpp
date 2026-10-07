#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 5;

    while (a >= b) {
        int x = b;

        while ((x << 1) <= a)
            x <<= 1;

        a = a - x;
    }

    cout << a;
}