class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int score=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>score)
            {
                score = nums[i];
            }
        }
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=score;
            score++;
        }
        return sum;

    }
};