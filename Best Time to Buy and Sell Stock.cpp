class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit = 0;
        
        while (right < prices.size()) {
            int tempProfit = prices[right] - prices[left];
            if (prices[left] < prices[right]) {
                profit = max(tempProfit, profit);
            }
            else {
                left = right;
            }
            right += 1;
        }
        return profit;
    }
};
