#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prices[100];

    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    cout << "Maximum Profit = " << maxProfit;

    return 0;
}