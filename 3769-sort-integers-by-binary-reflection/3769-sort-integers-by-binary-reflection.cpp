class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<vector<int>> s;

        for (int i = 0; i < nums.size(); i++) {
            int reflection = 0;
            int temp = nums[i];

            while (temp != 0) {
                reflection = (reflection<<1) | (temp & 1);
                temp >>= 1;
            }

            s.push_back({reflection, nums[i]});
        }

        sort(s.begin(), s.end());

        vector<int> ans;
        for (auto &v : s) {
            ans.push_back(v[1]);
        }

        return ans;
    }
};