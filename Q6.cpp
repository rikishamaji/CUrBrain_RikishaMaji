#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int counta = 0;
    int countb = 0;

    if (n == 0) {
        if (a == 0)
            counta++;

        if (b == 0)
            countb++;
    }

    while (n > 0) {
        int digit = n % 10;

        if (digit == a)
            counta++;

        if (digit == b)
            countb++;

        n = n / 10;
    }

    cout << abs(counta - countb);

    return 0;
}