#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int product = 1;

    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }

    cout << "Product = " << product;

    return 0;
}