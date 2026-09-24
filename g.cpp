#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter size: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << "Indices: " << i << " " << j << endl;
                cout << "Values: " << arr[i] << " + " << arr[j];
                return 0;
            }
        }
    }

    cout << "No pair found";

    return 0;
}