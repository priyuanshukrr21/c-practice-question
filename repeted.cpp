#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int seen[10] = {0};
    int repeated = -1;

    while (n > 0) {
        int digit = n % 10;

        if (seen[digit] == 1) {
            repeated = digit;
        } else {
            seen[digit] = 1;
        }

        n /= 10;
    }

    if (repeated != -1)
        cout << "Repeated Digit = " << repeated;
    else
        cout << "No repeated digit";

    return 0;
}