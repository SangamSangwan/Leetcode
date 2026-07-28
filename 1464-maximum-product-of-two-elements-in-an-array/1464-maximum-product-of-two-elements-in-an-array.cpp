class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;
        int j=0;
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>=j)
            {
                if(i<nums[k])
                {
                    j=i;
                    i = nums[k];
                }
                else
                {
                    j = nums[k];
                }
            }
        }
        return ((i-1)*(j-1));
    }
};