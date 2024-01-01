class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> ans = nums;
        for (int i = 1; i < nums.size(); i++) {
            ans[i] += max(0, ans[i-1]);
        }
        return *max_element(begin(ans), end(ans));
    }
};
