#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            total += i;
    }

    if(total == n)
        cout << "Perfect Number";
    else
        cout << "Not Perfect";

    return 0;
}