class Solution {
public:
    int solve(long long n, unordered_map<long long,int>& dp)
    {
        if(n==1) return 0;

        if(dp.count(n))
            return dp[n];

        if(n%2==0)
        {
            return dp[n] = 1 + solve(n/2,dp);
        }
        else
        {
            return dp[n] = 1 + min(solve(n+1,dp), solve(n-1,dp));
        }
    }

    int integerReplacement(int n) {
        unordered_map<long long,int> dp;
        return solve(n,dp);
    }
};