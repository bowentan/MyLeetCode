// Copyright 2022 Bowen Tan

/* Self-compile part start, unnecesssary in LeetCode website */
#include <bits/stdc++.h>

#include <vector>

using std::vector;
/* Self-compile part end */

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int max_profit = INT_MIN;
    for (int i = 0; i < prices.size(); ++i) {
      if (prices[i] < min_price) {
        min_price = prices[i];
      }
      if (prices[i] - min_price > max_profit) {
        max_profit = prices[i] - min_price;
      }
    }
    return max_profit;
  }
};
