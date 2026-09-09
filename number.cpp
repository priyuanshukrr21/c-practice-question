#include <iostream>
using namespace std;

int main() {
    int secret = 8, guess, attempts = 3;

    while (attempts > 0) {
        cout << "Guess (1-10): ";
        cin >> guess;

        if (guess == secret) {
            cout << "You Win!";
            return 0;
        }

        cout << (guess > secret ? "Too High\n" : "Too Low\n");
        attempts--;
    }

    cout << "Game Over!";
    return 0;
}