#include <iostream>
using namespace std;

long long moduloPower(long long base, int power, long long MOD) {
    long long result = 1 % MOD;
    base = base % MOD;

    for (int i = 0; i < power; i++) {
        result = (result * base) % MOD;
    }

    return result;
}

int main() {
    cout << moduloPower(2, 10, 1000) << "\n";
    cout << moduloPower(7, 0, 13) << "\n";
    cout << moduloPower(9, 1, 7) << "\n";
    cout << moduloPower(3, 4, 1) << "\n";
    cout << moduloPower(0, 5, 11) << "\n";

    return 0;
}