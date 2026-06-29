class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int n;
        vector<int> ans;
        for(int i=left;i<=right;i++)
        {
            n = i;
            int r=0;
            while(n!=0)
            {
                r = n%10;
                if(r==0) break;
                if(i%r!=0)
                {
                    break;
                }
                n = n/10;
            }
            if(n==0) ans.push_back(i);
        }
        return ans;
    }
};