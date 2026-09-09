#include <iostream>
using namespace std;

int main() {
    int secret = 7, guess;

    cout << "Guess the number: ";
    cin >> guess;

    if (guess == secret)
        cout << "You Win!";
    else
        cout << "You Lose!";

    return 0;
}