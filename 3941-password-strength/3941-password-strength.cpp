class Solution {
public:
    int passwordStrength(string password) {
        unordered_map <int,bool> mp;
        int ans=0;
        for(auto ch:password)
        {
            if(mp[ch]!=true)
            {
            if(ch=='!' || ch=='@' || ch=='#' || ch=='$')
            {
                ans+=5;
            }
            else if(ch>='0' && ch<='9')
            {
                ans+=3;
            }
            else if(ch>='A' && ch<='Z')
            {
                ans+=2;
            }
            else if(ch>='a' && ch<='z')
            {
                ans+=1;
            }
            mp[ch]=true;
            }
        }
        return ans;
    }
};