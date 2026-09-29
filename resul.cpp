#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int result = 1;

    for(int i = 0; i < b; i++)
        result *= a;

    cout << result;

    return 0;
}