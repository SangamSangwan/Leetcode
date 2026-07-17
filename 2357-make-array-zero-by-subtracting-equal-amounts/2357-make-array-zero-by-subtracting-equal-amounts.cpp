class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sub=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]-sub;
            if(nums[i]!=0)
            {
                sub += nums[i];
                nums[i]=0;
                count++;
            }
        }
        return count;
    }
};