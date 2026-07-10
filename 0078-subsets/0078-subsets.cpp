class Solution {
public:
    void getallSubset(vector<int> &nums , vector<int> &ans,int i,vector<vector<int>> &allSubset)
    {
        if(i==nums.size())
        {
            allSubset.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        getallSubset(nums,ans,i+1,allSubset);

        ans.pop_back();
        getallSubset(nums,ans,i+1,allSubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubset;
        vector<int> ans;
        getallSubset(nums,ans,0,allSubset);

        return allSubset;
    }
};