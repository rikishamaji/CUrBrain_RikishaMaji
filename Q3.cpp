#include <iostream>
using namespace std;

int palindrome(int n) {
    int sign = 1;

    if (n < 0) {
        sign = -1;
        n = -n;
    }

    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev * sign;
}

int main() {
    int n;
    cin >> n;

    int rev = palindrome(n);

    if (n == rev && n >= 0)
        cout << n;
    else
        cout << n + rev;

    return 0;
}