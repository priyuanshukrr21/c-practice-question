#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess the number (1-10): ";
    cin >> guess;

    if (guess == secret) {
        cout << "You Win!";
    }
    else if (guess > secret) {
        cout << "Too High!";
    }
    else {
        cout << "Too Low!";
    }

    return 0;
}