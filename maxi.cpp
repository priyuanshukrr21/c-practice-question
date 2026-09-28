#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maximum = -1;
    int answer = 0;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        int temp = num;
        int sum = 0;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum > maximum) {
            maximum = sum;
            answer = num;
        }
    }

    cout << "Number = " << answer << endl;
    cout << "Digit Sum = " << maximum;

    return 0;
}