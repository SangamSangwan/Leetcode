class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        vector<long long> a;

        for (int x : nums)
            a.push_back(llabs((long long)x));

        sort(a.begin(), a.end());

        long long ans = 0;
        int n = a.size();

        int r = 0;

        for (int l = 0; l < n; l++) {
            while (r < n && a[r] <= 2 * a[l]) {
                r++;
            }

            ans += (r - l - 1);
        }

        return ans;
    }
};