class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.length();
        vector<char> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i] = s[i];
        }
        while(n>2)
        {
            for(int i=0;i<n-1;i++)
            {
                ans[i] = (((ans[i]-'0')+(ans[i+1]-'0'))%10)+'0';
            }
            n--;
        }
        return (ans[0]==ans[1]);
    }
};