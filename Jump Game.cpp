class Solution {
public:
    bool canJump(vector<int>& nums) {
        int canJump = 0;
        for (int i = 0; i <= canJump; i++) {
            canJump = max(canJump, i + nums[i]);
            if (i >= nums.size() - 1) {return true;}
        }
        return false;
    }
};
