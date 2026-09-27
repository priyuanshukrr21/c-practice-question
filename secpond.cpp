#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int largest = -1;
    int second = -1;

    while (n > 0) {
        int digit = n % 10;

        if (digit > largest) {
            second = largest;
            largest = digit;
        }
        else if (digit > second && digit != largest) {
            second = digit;
        }

        n /= 10;
    }

    cout << "Second Largest = " << second << endl;

    return 0;
}