#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2};
    int n = 6, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 2)
            count++;
    }

    cout << "Frequency = " << count;
    return 0;
}