class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + nums[i];

        vector<long long> ans;

        for (int q : queries) {

            int idx = lower_bound(nums.begin(), nums.end(), q) - nums.begin();

            long long leftCost = 1LL * q * idx - prefix[idx];

            long long rightCost =
                (prefix[n] - prefix[idx]) - 1LL * q * (n - idx);

            ans.push_back(leftCost + rightCost);
        }

        return ans;
    }
};