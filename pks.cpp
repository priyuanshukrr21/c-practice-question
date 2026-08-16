#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    int &temp = a;

    cout << "temp = " << temp << endl;
    return 0;
}