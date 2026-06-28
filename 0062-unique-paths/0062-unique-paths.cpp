class Solution {
public:
    int grid( vector<vector<int>> &dp,int m,int n)
    {
        if(m==0 || n==0) return 1;
        if(dp[m][n]!=0) return dp[m][n];
        else
        {
            dp[m][n]=grid(dp,m-1,n)+grid(dp,m,n-1);
            return dp[m][n];
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n, 0));
        return grid(dp,m-1,n-1);
    }
};