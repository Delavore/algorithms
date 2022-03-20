// find left boundary of element x in sorted array, return index of left boundary
// time complexity: O(logN)

#include <iostream>  // std::cout, std::endl 
#include <vector>    // std::vector

int left_boundary(const std::vector<int>& arr, int x) {
    int left = -1;  // arr[left] < x
    int right = arr.size();  // ? arr[right] >= x : arr[right] > x
    while (right - left > 1) {
        int middle = (left + right) / 2;
        if (arr[middle] < x)
            left = middle;
        else 
            right = middle;
    }

    return left;
}

// test code 
int main() {
    std::vector<int> arr { 1, 2, 3, 3, 5, 5, 5, 7, 10 };
    int x = 5;
    std::cout << left_boundary(arr, x) << std::endl;  // 3
}
