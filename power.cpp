#include <iostream>
using namespace std;

int main() {
    int base = 2, exponent = 5;
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        int temp = result;
        result = 0;

        for (int j = 0; j < base; j++)
            result += temp;
    }

    cout << result;
}