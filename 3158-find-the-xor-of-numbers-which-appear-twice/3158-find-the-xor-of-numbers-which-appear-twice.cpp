class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        vector<int> n(51,0);
        int x = 0;
        for(auto i:nums)
        {
            n[i]++;
            if(n[i]%2==0)
            {
                x ^= i;
            }
        }
        return x;
    }
};