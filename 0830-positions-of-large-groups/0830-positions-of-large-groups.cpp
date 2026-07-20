class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        
        int start =0;
        int curr=0;
        for(int i=0;i<s.length();i++)
        {
            curr = i;
            if(s[start]!=s[curr])
            {
                if(curr-start > 2)
                {
                    ans.push_back({start,curr-1});
                }
                start=i;
            }
        }
        if(curr-start >= 2) ans.push_back({start,curr});
        return ans;
    }
};