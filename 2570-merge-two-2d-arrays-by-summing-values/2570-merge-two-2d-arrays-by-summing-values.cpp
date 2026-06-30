class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        int l1=0;
        int l2=0;
        while(l1 < nums1.size() && l2 < nums2.size())
        {
            if(nums1[l1][0]<nums2[l2][0])
            {
                ans.push_back({nums1[l1][0],nums1[l1][1]});
                l1++;
            }
            else if(nums1[l1][0]>nums2[l2][0])
            {
                ans.push_back({nums2[l2][0],nums2[l2][1]});
                l2++;
            }
            else
            {
                ans.push_back({nums2[l2][0],nums2[l2][1]+nums1[l1][1]});
                l1++;
                l2++;
            }
        }
        
            while(l1 < nums1.size())
            {
                ans.push_back({nums1[l1][0],nums1[l1][1]});
                l1++;
            }
        
        
            while(l2 < nums2.size())
            {
                ans.push_back({nums2[l2][0],nums2[l2][1]});
                l2++;
            }
        
        return ans;

    }
};