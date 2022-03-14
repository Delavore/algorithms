//#include <bits/stdc++.h>
#include <iostream>  // std::cout, std::endl
#include <vector>  // std::vector

int knapsack(const std::vector<int>& w, int W) {
    std::vector<std::vector<int> > dp(w.size()+1, std::vector<int> (W+1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= w.size(); i++) {
        for (int j = 0; j <= W; j++) {
            if (w[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j - w[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    } 
    for (int i = W; i >= 0; i--)
        if (dp[w.size()][i]) return i;
    return -1;
}

// driver code
int main() {
    std::vector<int> w { 2, 3, 4, 4, 6, 9 };
    int W = 10;
    std::cout << knapsack(w, W) << std::endl;  // 10 

    return 0;
}
