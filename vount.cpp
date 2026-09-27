#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        if (n % 10 == 0)
            count++;

        n /= 10;
    }

    cout << "Zeros = " << count;

    return 0;
}