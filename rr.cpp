#include <iostream>
using namespace std;

int main() {
    int n = 121, original = n, rev = 0;

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}