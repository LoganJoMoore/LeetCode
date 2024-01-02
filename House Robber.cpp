class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(size(nums), -1);
        return rob(nums, dp, 0);
    }
    int rob(vector<int>& nums, vector<int> & dp, int i) {
        if (i >= size(nums)) return 0;
        if (dp[i] != -1) return dp[i];
        return dp[i] = max(rob(nums, dp, i+1), nums[i] + rob(nums, dp, i+2));
    }
};
