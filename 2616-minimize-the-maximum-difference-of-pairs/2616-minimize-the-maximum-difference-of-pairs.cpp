class Solution {
public:

    bool check(vector<int>& nums, int p, int mid)
    {
        int count = 0;

        for(int i=0;i<nums.size()-1;)
        {
            if(nums[i+1]-nums[i] <= mid)
            {
                count++;
                i += 2;
            }
            else
            {
                i++;
            }
        }

        return count >= p;
    }


    int minimizeMax(vector<int>& nums, int p) {

        sort(nums.begin(),nums.end());

        int low = 0;
        int high = nums.back()-nums.front();

        int ans = high;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            if(check(nums,p,mid))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }

        return ans;
    }
};