#include <iostream>
using namespace std;

bool evenDigits(int n) {
    if (n < 0)
        n = -n;

    if (n == 0)
        return false;

    int c = 0;

    while (n > 0) {
        c++;
        n = n / 10;
    }

    return c % 2 == 0;
}

int main() {
    int n;
    cin >> n;

    cout << (evenDigits(n) ? "True" : "False");

    return 0;
}