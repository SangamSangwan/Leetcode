class Solution {
public:
    int fact(int n)
    {
        return (n*(n-1))/2;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int sum[101]={0};
        int res=0;
        for(auto i:nums)
        {
            sum[i]++;
        }
        for(int i=0;i<101;i++)
        {
            if(sum[i]!=0) res+=fact(sum[i]);
        }
        return res;
    }
};