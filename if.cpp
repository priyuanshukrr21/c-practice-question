#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int player = rand() % 6 + 1;
    int computer = rand() % 6 + 1;

    cout << "You rolled: " << player << endl;
    cout << "Computer rolled: " << computer << endl;

    if (player > computer)
        cout << "You Win!";
    else if (player < computer)
        cout << "Computer Wins!";
    else
        cout << "Draw!";

    return 0;
}