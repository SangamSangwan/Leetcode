class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        int prev=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 && nums[i]==prev)
            {
                count++;
                maxi = max(maxi,count);

            }
            else if(nums[i]==0)
            {
                count=0;
                
            }
            else
            {
                prev=nums[i];
                count=1;
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};