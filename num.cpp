#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int num = 1; num <= n; num++) {
        int temp = num;
        int sum = 0;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == 10)
            cout << num << " ";
    }

    return 0;
}