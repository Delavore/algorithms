// time complexity: O(N^2)

#include <iostream>  // std::cout, std::endl
#include <vector>    // std::vector

void insertion_sort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i], j = i - 1;     // int j = i;
        while (j >= 0 && arr[j] > key) {  // while (i > 0 && arr[i-1] > arr[i]) {
            arr[j + 1] = arr[j];         // int temp = arr[i];
            j--;                         // arr[i] = arr[i-1];
        }                                // arr[i-1] = temp;
        arr[j+1] = key;                  // i--;
    }                                    // }
}

// test code 
int main() {
    std::vector<int> arr { 2, 3, 6, 1, 0, 10, 2 };
    insertion_sort(arr);
    for (auto i : arr)
        std::cout << i << ' ';
    std::cout << std::endl;
    return 0;
}
