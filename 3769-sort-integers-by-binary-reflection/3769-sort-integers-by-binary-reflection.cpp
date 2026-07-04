class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
       if (nums.size() == 1) return nums;
       vector<pair<int,int>> ans;
       for(int i = 0; i <nums.size(); i++){
        int sum = 0;
        int n = nums[i];
        while(n!=0){
            sum = (sum << 1 )| (n&1);
            n = n>>1;
        }
        ans.push_back({sum,i});
       }

       sort(ans.begin(), ans.end(),
    [&](const pair<int,int>& a, const pair<int,int>& b) {
        if (a.first != b.first)
            return a.first < b.first;          // reflection value
        return nums[a.second] < nums[b.second]; // original value
    });

    vector<int> res;
for (auto &p : ans) {
    res.push_back(nums[p.second]);
}
       return res;
    }
};