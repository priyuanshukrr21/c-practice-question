#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int binary = 0;
    int place = 1;

    while(n > 0) {
        binary += (n % 2) * place;
        n /= 2;
        place *= 10;
    }

    cout << binary;

    return 0;
}