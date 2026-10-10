#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = 5, j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    while (j < n) {
        arr[j++] = 0;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}