#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


int mostPopularItem(const std::vector<int>& sales) {
    std::unordered_map<int, int> freqMap;
    
   
    for (int id : sales) {
        freqMap[id]++;
    }
    
    int bestId = sales[0];
    int maxFreq = 0;
    
   
    for (const auto& pair : freqMap) {
        int id = pair.first;
        int freq = pair.second;
        
        if (freq > maxFreq) {
            maxFreq = freq;
            bestId = id;
        } else if (freq == maxFreq) {
            if (id < bestId) {
                bestId = id;
            }
        }
    }
    
    return bestId;
}

int main() {
    
    std::vector<int> sales = {101, 103, 101, 102, 103, 105, 101, 103};
    std::cout << "Most Popular Item: " << mostPopularItem(sales) << std::endl;
    return 0;
}