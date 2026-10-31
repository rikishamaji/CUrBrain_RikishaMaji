#include <iostream>
#include <vector>


void reverseSubSegment(std::vector<int>& arr, int start, int end) {
    while (start < end) {
       
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        
        start++;
        end--;
    }
}

int main() {
    
    std::vector<int> arr = {10, 20, 30, 40, 50, 60};
    int start = 1, end = 4;
    
    reverseSubSegment(arr, start, end);
    
    std::cout << "Reversed Sub-segment: [";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i + 1 < arr.size() ? ", " : "");
    }
    std::cout << "]" << std::endl;
    
    return 0;
}