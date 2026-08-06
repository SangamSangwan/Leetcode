class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {

        int n = nums.size();

        vector<int> even(n+1,0);
        vector<int> odd(n+1,0);

        for(int i=0;i<n;i++)
        {
            even[i+1] = even[i];
            odd[i+1] = odd[i];

            if(i%2==0)
                even[i+1]+=nums[i];
            else
                odd[i+1]+=nums[i];
        }

        int ans=0;

        for(int i=0;i<n;i++)
        {
            int leftEven = even[i];
            int leftOdd = odd[i];

            int rightEven = odd[n]-odd[i+1];
            int rightOdd = even[n]-even[i+1];

            if(leftEven + rightEven == leftOdd + rightOdd)
                ans++;
        }

        return ans;
    }
};