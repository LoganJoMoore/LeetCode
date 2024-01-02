class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> memo(target+1);
        memo[0] = 1;
        for (int i = 1; i <= target; i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] <= i) {
                    memo[i] += memo[i-nums[j]];
                }
            }
        }
        return memo[target];
    }
};
