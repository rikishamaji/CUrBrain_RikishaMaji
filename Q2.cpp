#include <iostream>
using namespace std;

int reverseAndDouble(int n) {
    int s = 1;

    if (n < 0) {
        s = -1;
        n = -n;
    }

    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    rev = rev * s;

    return rev * 2;
}

int main() {
    int n;
    cin >> n;

    cout << reverseAndDouble(n);

    return 0;
}