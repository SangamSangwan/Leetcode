class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for(int i = 0; (i + 1) * (i + 1) <= n; i++) {
            if(n % (i + 1) == 0) {
                sum += nums[i] * nums[i];

                int d = n / (i + 1);

                if(d != i + 1) {
                    sum += nums[d - 1] * nums[d - 1];
                }
            }
        }

        return sum;
    }
};