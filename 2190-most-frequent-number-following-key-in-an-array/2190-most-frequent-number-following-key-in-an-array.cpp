class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int freq[1001] = {0};

        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] == key) {
                freq[nums[i+1]]++;
            }
        }

        int ans = 0;
        int mx = 0;

        for(int i = 1; i <= 1000; i++) {
            if(freq[i] > mx) {
                mx = freq[i];
                ans = i;
            }
        }

        return ans;
    }
};