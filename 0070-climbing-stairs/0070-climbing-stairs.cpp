class Solution {
public:
    int clim(vector<int>& dp,int n)
    {
        if(n==1 || n==2) return n;
        if(dp[n]!=0) return dp[n];
        dp[n] = clim(dp,n-1)+clim(dp,n-2);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return clim(dp,n);
    }
};