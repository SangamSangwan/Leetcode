class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

        vector<vector<int>> ans;

        set<pair<int,int>> queenPos;

        for(auto q : queens)
            queenPos.insert({q[0], q[1]});

        vector<pair<int,int>> dir = {
            {-1,-1}, {-1,0}, {-1,1},
            {0,-1},           {0,1},
            {1,-1},  {1,0},  {1,1}
        };

        for(auto d : dir)
        {
            int x = king[0] + d.first;
            int y = king[1] + d.second;

            while(x >= 0 && x < 8 && y >= 0 && y < 8)
            {
                if(queenPos.count({x,y}))
                {
                    ans.push_back({x,y});
                    break;
                }

                x += d.first;
                y += d.second;
            }
        }

        return ans;
    }
};