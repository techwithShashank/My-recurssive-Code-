#include <bits/stdc++.h>
using namespace std;
int LongestIncSubsequence(vector<int>&nums, int curr, int prev)
{
  if (curr >= nums.size())
    return 0;
  int Include_len = 0;
  if (prev == -1 || nums[prev] < nums[curr])
  {
    // include
    Include_len = 1 + LongestIncSubsequence(nums, curr + 1, curr);
  }
  int Exclude_len = 0 + LongestIncSubsequence(nums, curr + 1, prev);
  return max(Include_len, Exclude_len);
}
int main()
{
  vector<int> nums = {10,9,2,5,3,7,101,18};
  cout << "Longest Subsequence Length is " << LongestIncSubsequence(nums, 0, -1);
}