#include <iostream>
using namespace std;

int main() {
    int n, x;
    int max1 = 0, max2 = 0;
    bool has1 = false, has2 = false;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
       
        cin >> x;

        if (!has1 || x > max1) {
            if (has1) {
                max2 = max1;
                has2 = true;
            }
            max1 = x;
            has1 = true;
        } else if (x < max1 && (!has2 || x > max2)) {
            max2 = x;
            has2 = true;
        }
    }

    if (has2) {
        cout << max2 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}