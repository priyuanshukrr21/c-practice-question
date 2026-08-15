#include <iostream>
using namespace std;

float simpleInterest(float P, float R, float T)
{
    return (P * R * T) / 100;
}

int main()
{
    float P, R, T;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    cout << "Simple Interest = " << simpleInterest(P, R, T);

    return 0;
}