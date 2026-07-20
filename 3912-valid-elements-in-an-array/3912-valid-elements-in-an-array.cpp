class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        int left=0;
        int right=0;
        int leftinx=0;
        int rightindx=0;

        vector<int> ans;
        for(int i =0;i<n;i++)
        {
            if(nums[i]>left)
            {
                ans.push_back(nums[i]);
                left = nums[i];
                leftinx=i;
            }
        }
        for(int i=n-1;i>leftinx;i--)
        {
            if(nums[i]>right)
            {
                rightindx=i;
                right = nums[i];
                temp.push_back(right);
            }
        }
        for(int i=0;i<temp.size();i++) cout << temp[i] << endl;
        int t = temp.size();
        for(int i=0;i<t;i++)
        {
            ans.push_back(temp.back());
            temp.pop_back();
        }
        return ans;
    }
};