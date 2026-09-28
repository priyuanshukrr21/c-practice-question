#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int lcm = (a * b) / x;

    cout << "LCM = " << lcm;

    return 0;
}