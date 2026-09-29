#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0, oddSum = 0;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    cout << "Difference = " << evenSum - oddSum;

    return 0;
}