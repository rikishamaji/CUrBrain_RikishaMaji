#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> digits;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        digits.push_back(digit);

        n = n / 10;
    }

    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i] << " ";
    }

    return 0;
}