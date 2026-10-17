#include <iostream>
using namespace std;

bool divisibleprefix(int arr[], int n, int k) {
    long long sum = 0;

    if (k < 0) {
        k = -k;
    }

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];

        if (sum % k == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int arr1[] = {4, 2, 9};
    cout << (divisibleprefix(arr1, 3, 3) ? "True" : "False") << "\n";

    int arr2[] = {1, 2, 4};
    cout << (divisibleprefix(arr2, 3, 5) ? "True" : "False") << "\n";

    int arr3[] = {5};
    cout << (divisibleprefix(arr3, 1, 5) ? "True" : "False") << "\n";

    int arr4[] = {0, 1};
    cout << (divisibleprefix(arr4, 2, 7) ? "True" : "False") << "\n";

    int arr5[] = {-2, 2, 1};
    cout << (divisibleprefix(arr5, 3, 3) ? "True" : "False") << "\n";

    return 0;
}