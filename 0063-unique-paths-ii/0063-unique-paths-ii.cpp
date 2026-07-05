class Solution {
public:
    int tellways(vector<vector<int>>& n,vector<vector<int>>& obstacleGrid,int x,int y,int x_max,int y_max)
    {
        if(x>x_max || y>y_max) return 0;
        if(obstacleGrid[x][y]==1) return 0;
        if(n[x][y]!=-1) return n[x][y];
        else
        {
        n[x][y]=tellways(n,obstacleGrid,x+1,y,x_max,y_max)+
            tellways(n,obstacleGrid,x,y+1,x_max,y_max);
            return n[x][y];
        }
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int x_max = obstacleGrid.size()-1;
        int y_max = obstacleGrid[0].size()-1;
        int x =0;
        int y=0;
        int ways=0;
        vector<vector<int>> n(x_max+1,vector<int>(y_max+1,-1));
        n[x_max][y_max]=1;
        return tellways(n,obstacleGrid,x,y,x_max,y_max);
        
        
    }
};