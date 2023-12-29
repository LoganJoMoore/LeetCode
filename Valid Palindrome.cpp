class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0;
        int right = s.size() - 1;

        for (int i = 0; i < n; i++) {
            if (!isalnum(s[left])) {left++; continue;}
            if (!isalnum(s[right])) {right--; continue;}
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};
