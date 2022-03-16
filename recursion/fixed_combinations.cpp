// combinations of a certain amount of numbers

//include <bits/stdc++.h>
#include <iostream>  // std::cout, std::endl
#include <vector>    // std::vector

// arr --> input array
// temp --> temporary array to store current combination
// start && end --> starting and ending indexes in arr
// index --> current index in temp
// r --> size of combination 
void combinations(const std::vector<int>& arr, std::vector<int>& temp, int start, int end, int index, int r) {
    // current combination is ready
    if (index == r) {
        for (int i = 0; i < r; i++)
            std::cout << temp[i] << ' ';
        std::cout << std::endl;
    }

    // condition "end - i + 1 >= r - index" makes sure that including 
    // one element at index will make a combination with remaining 
    // elements at remaining positions
    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
        temp[index] = arr[i];
        combinations(arr, temp, i+1, end, index+1, r);
    }
}
void print_combinations(const std::vector<int>& arr, int r) {
    std::vector<int> temp(r); 
    combinations(arr, temp, 0, arr.size()-1, 0, r);
}

// test code 
int main() {
    std::vector<int> arr { 2, 3, 4, 4, 6, 9};
    int amount = 2;
    print_combinations(arr, amount);

    return 0;
}
