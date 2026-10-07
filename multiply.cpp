#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 5;
    int result = 0;

    while (b > 0) {
        if (b & 1)
            result += a;

        a <<= 1;
        b >>= 1;
    }

    cout << result;
}