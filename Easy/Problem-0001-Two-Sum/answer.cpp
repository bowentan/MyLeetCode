// Copyright 2022 Bowen Tan

#include <unordered_map>
#include <vector>
using std::unordered_map;
using std::vector;

class Solution {
 public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> indices;
    unordered_map<int, int> rvalues;
    for (int i = 0; i < nums.size(); ++i) {
      rvalues[target - nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); ++i) {
      if (rvalues[nums[i]]) {
        if (i == rvalues[nums[i]]) continue;
        indices.push_back(i);
        indices.push_back(rvalues[nums[i]]);
        break;
      }
    }
    return indices;
  }
};
