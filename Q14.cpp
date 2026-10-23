#include <iostream>
#include <vector>

using namespace std;

vector<int> thresholdsales(const vector<int>& sales, int threshold) {
    vector<int> result;
    for (int sale : sales) {
        if (sale >= threshold) {
            result.push_back(sale);
        }
    }
    return result;
}

int main() {
    int n, threshold;
    if (!(cin >> n)) return 0;

    vector<int> sales(n);
    for (int i = 0; i < n; ++i) {
        cin >> sales[i];
    }

    cin >> threshold;

    vector<int> filter = thresholdsales(sales, threshold);

    cout << "[";
    for (size_t i = 0; i < filter.size(); ++i) {
        cout << filter[i];
        if (i + 1 < filter.size()) {
            cout << ", ";
        }
    }
    cout << "]\n";

    return 0;
}