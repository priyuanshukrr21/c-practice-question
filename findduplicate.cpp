#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {
                cout << "Duplicate Number = " << arr[i];
                return 0;
            }
        }
    }

    cout << "No Duplicate";

    return 0;
}