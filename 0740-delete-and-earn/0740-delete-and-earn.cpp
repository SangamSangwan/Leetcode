class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> profit(10007, 0);
        for (int x: nums) profit[x] += x;

        int dp_prev = 0, dp_cur = 0;
        for (int i = 1; i <= 10000; ++i)
            dp_prev = std::exchange(dp_cur, max(dp_cur, profit[i] + dp_prev));

        return dp_cur;
    }
};