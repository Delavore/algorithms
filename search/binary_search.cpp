// find element x in sorted array, return index of x
// time complexity: O(logN)

#include <vector>    // std::vector
#include <iostream>  // std::cout, std::endl

int binary_search(const std::vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == x)
        return mid;

    if (arr[mid] < x) 
        l = mid + 1;
    else 
        r = mid - 1;
    }

    return -1;
}

// test code
int main() {
    std::vector<int> arr { 1, 4, 7, 10, 43, 213, 1000 };
    int x = 1;
    std::cout << binary_search(arr, x) << std::endl;  // 0 

    return 0;
}
