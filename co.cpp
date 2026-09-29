#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for(int i = 10; i <= n; i++) {
        if(i % 3 == 0)
            count++;
    }

    cout << "Count = " << count;

    return 0;
}