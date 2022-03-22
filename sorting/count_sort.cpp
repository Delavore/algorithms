#include <iostream>   // std::cout, std::endl
#include <vector>     // std::vector
#include <algorithm>  // std::max_element

void count_sort(std::vector<int>& arr) {
    int max = *std::max_element(arr.begin(), arr.end());
    std::vector<int> count(max, 0);
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    int k = 0;
    for (int i = 0; i <= max; i++) 
        for (int j = 0; j < count[i]; j++) 
            arr[k++] = i;
}

// test code 
int main() {
    std::vector<int> arr { 2, 2, 1, 1, 3, 2, 1, 2};
    count_sort(arr);
    for (auto element : arr)
        std::cout << element << ' ';
    std::cout << std::endl;
}
