// function that counts how many different ways you can make change for an amount of money

// include <bits/stdc++.h>
#include <vector>  // std::vector
#include <iostream>  // std::cout, std::endl

unsigned long long countChange(const std::vector<unsigned long long>& coins, unsigned long long money) {
    std::vector<unsigned long long> dp(money+1, 0);
    dp[0] = 1;

    for (auto coin : coins)
        for (unsigned long long i = 1; i <= money; i++)
            if (i >= coin)
                dp[i] += dp[i-coin];

    return dp[money];
}

// driver code
int main() {
    std::vector<unsigned long long> coins { 2, 3, 5 };
    unsigned long long money = 10;
    std::cout << countChange(coins, money) << std::endl;  // 4

    return 0;
}
