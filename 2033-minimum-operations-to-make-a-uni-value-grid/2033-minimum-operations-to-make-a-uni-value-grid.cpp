class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> vec;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                vec.push_back(grid[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int now= vec[0]%x;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]%x != now) return -1;
        }
        int a = vec[vec.size()/2];
        int count1=0;
        int count2=0;
        int b=0;
        if(vec.size()!=1) b = vec[(vec.size()/2)-1];
        for(int i=0;i<vec.size();i++)
        {
            
            count1 += abs((vec[i]-a)/x);
            if(vec.size()!=1)
            {
                count2 += abs((vec[i]-b)/x);
            }

        }
        if(count2!=0)
        {
            return min(count1,count2);
        }
        else return count1;
    }
};