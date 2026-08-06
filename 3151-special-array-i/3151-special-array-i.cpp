class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool change;
        if(nums[0]%2==0)change = true;
        else change = false;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]%2==0 && change==false)
            {
                change = true;
            }
            else if (nums[i]%2!=0 && change==true)
            {
                change = false;
            }
            else return false;
        }
        return true;
    }
};