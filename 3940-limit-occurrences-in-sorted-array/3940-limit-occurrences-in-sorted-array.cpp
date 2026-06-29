class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> ans;
        int curr=nums[0];
        int n=k;
        for(int i=0;i<nums.size();i++)
        {
            
            if(n>0 && curr==nums[i])
            {
                n--;
                
                ans.push_back(nums[i]);
            }
            else if(n==0 && curr==nums[i]) continue;
            else
            {
                curr = nums[i];
                ans.push_back(nums[i]);
                n=k-1;
            }
        }
        return ans;
    }
};