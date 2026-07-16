class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int> seen(101,0);
        int count=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(seen[nums[i]]==1)
            {
                return (i+3)/3;
            }
            seen[nums[i]]++;
        }
        return 0;
    }
};