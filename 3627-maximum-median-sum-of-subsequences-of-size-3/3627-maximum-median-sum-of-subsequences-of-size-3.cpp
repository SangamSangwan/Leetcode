class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long median =0;
        sort(nums.begin(),nums.end());
        int i = nums.size()-2;
        int n = nums.size()/3;
        while(n--)
        {
            median+=nums[i];
            i = i-2;
        }
        return median;
    }
};