#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n = 5;

    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << "Largest prime = " << i;
            break;
        }
    }

    return 0;
}