#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    int n, val, result;
    vector<int> arr;

    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        
        cin >> val;
        arr.push_back(val);
    }

    result = arr[0];

    for(int i = 1; i<n; i++){
        if(abs(result) > abs(arr[i])){
            result= arr[i];
        }
    }

    cout  << result;

    return 0;
}