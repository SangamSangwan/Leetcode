class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int i=0;
        int j1=0;
        int j2=0;
        vector<int> index(2,-1);
        for(int i=indexDifference;i<nums.size();i++)
        {
            if(nums[i-indexDifference]>nums[j1])
            {
                j1=i-indexDifference;
            }
            if(nums[i-indexDifference]<nums[j2])
            {
                j2=i-indexDifference;
            }
           
            if((abs(nums[j1]-nums[i])>=valueDifference) && abs(j1-i)>=indexDifference)
            {
                index.pop_back();
                index.pop_back();
                index.push_back(j1);
                index.push_back(i);
                return index;
            }
            if((abs(nums[j2]-nums[i])>=valueDifference) && abs(j2-i)>=indexDifference)
            {
                index.pop_back();
                index.pop_back();
                index.push_back(j2);
                index.push_back(i);
                return index;
            }
        }
        return index;
    }
};