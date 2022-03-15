// function that counts how many different ways you can make change for an amount of money

// #include <bits/stdc++.h>
#include <vector>  // std::vector
#include <iostream>  // std::cout, std::endl

int count(const std::vector<int> coins, int size, int money){
    if (!money) return 1;
    if (money < 0 || (size <= 0 && money >= 1)) return 0;  // no solution exist

    // including coins[size-1] + excluding coins[size-1]
    return count(coins, size-1, money) + count(coins, size, money - coins[size-1]);
}

int countChange(const std::vector<int> coins, int money) {
    return count(coins, coins.size(), money);
}

// test drive
int main() {
    std::vector<int> coins { 2, 3, 5 };
    int money = 10;
    std::cout << countChange(coins, money) << std::endl;  // 4

    return 0;
}
