class Solution {
public:
   
    int countWays(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int ways=0;
        for(int i=0;i<nums.size();i++) 
        {
            if(i+1<nums.size())
            {
                if( nums[i]<i+1) 
                {
                    if(nums[i+1]>i+1)
                    {
                        ways++;
                        cout << i << endl;
                    }
                    
                }
               
            }
            
        }
        if(nums[0]>0) ways++;
        if(nums[nums.size()-1]<nums.size()) ways++;
        return ways;
    }
    
};