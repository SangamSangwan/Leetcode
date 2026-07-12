class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='i')
            {
                std::reverse(ans.begin(), ans.end());;   
            }
            else ans+=s[i];
        }
        return ans;
    }
};