#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int num = 2; num <= n; num++) {
        int count = 0;

        for(int i = 1; i <= num; i++) {
            if(num % i == 0)
                count++;
        }

        if(count == 2)
            cout << num << " ";
    }

    return 0;
}