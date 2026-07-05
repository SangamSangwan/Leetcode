class Solution {
public:
    int getmin(vector<vector<int>>& dp,vector<vector<int>>& grid,int x,int y,int row,int col)
    {
        if(x >= row || y>=col) return INT_MAX;
        if(dp[x][y]!=-1) return dp[x][y];
        if(x==row-1 && y==col-1) return grid[x][y];
        dp[x][y]=grid[x][y]+min(getmin(dp,grid,x+1,y,row,col),getmin(dp,grid,x,y+1,row,col));
        return dp[x][y];
    };
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int x=0;
        int y=0;
        vector<vector<int>> dp(row,vector<int>(col,-1));
        return (getmin(dp,grid,x,y,row,col));
    }
};