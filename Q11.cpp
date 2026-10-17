#include <iostream>
using namespace std;

long long modularAddition(long long arr[], int n) {
    long long MOD = 1000000007;
    long long result = 0;

    for (int i = 0; i < n; i++) {
        result = (result + (arr[i] % MOD)) % MOD;
    }

    return result;
}

int main() {
    long long arr1[] = {1000000000, 1000000000, 1000000000};
    cout << modularAddition(arr1, 3) << "\n";

    long long arr2[] = {1, 2, 3, 4};
    cout << modularAddition(arr2, 4) << "\n";

    long long* arr3 = nullptr;
    cout << modularAddition(arr3, 0) << "\n";

    long long arr4[] = {1000000007};
    cout << modularAddition(arr4, 1) << "\n";

    long long arr5[] = {0, 0, 0};
    cout << modularAddition(arr5, 3) << "\n";

    return 0;
}