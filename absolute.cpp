#include <iostream>
using namespace std;

int main() {
    int n = -25;

    int mask = n >> 31;
    int result = (n ^ mask) - mask;

    cout << result;
}