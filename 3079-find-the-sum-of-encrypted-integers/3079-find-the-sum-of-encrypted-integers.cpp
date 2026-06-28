class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(auto i : nums)
        {
            int m = i;
            int digits=0;
            int maxdigit=INT_MIN;
            while(m>0)
            {
                maxdigit = max(maxdigit,m%10);
                m = m/10;
                digits++;
            }
            int ans=0;
            for(int j=0;j<digits;j++)
            {
                ans = ans*10+maxdigit;
            }
            
            sum = sum+ans;
        }
        return sum;
    }
};