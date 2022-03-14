//#include <bits/stdc++.h>
#include <vector>
#include <iostream>

// returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int W, const std::vector<int>& weight, const std::vector<int>& value) {
    std::vector<std::vector<int> > dp(weight.size()+1, std::vector<int>(W+1));

    for (int i = 0; i <= weight.size(); i++) {
        for (int j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (weight[i-1] <= j)
                dp[i][j] = std::max(value[i-1] + dp[i-1][j-weight[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[weight.size()][W];
}

// driver code
int main() {
    std::vector<int> weight { 10, 20, 30 };
    std::vector<int> value { 60, 100, 120 };
    int W = 50;
    
    std::cout << knapsack(W, weight, value) << std::endl; // 220

    return 0;
}
