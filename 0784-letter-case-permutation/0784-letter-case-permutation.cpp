class Solution {
public:
    void permute(string& temp,vector<string> &ans,string s,int i)
    {
        if(i==s.length())
        {
            ans.push_back(temp);
            return;
        }
        else
        {
            if(s[i]-'0' <= 9 && s[i]-'0'>=0)
            {
                temp.push_back(s[i]);
                permute(temp,ans,s,i+1);
                temp.pop_back();
            }
            else
            {
            temp.push_back(s[i]);
            permute(temp,ans,s,i+1);
            temp.pop_back();
            if(s[i]<97)
            {
                temp.push_back(s[i]-'A'+'a');
                permute(temp,ans,s,i+1);
            }
            else
            {
                temp.push_back(s[i]-'a'+'A');
                permute(temp,ans,s,i+1);
            }
            temp.pop_back();
            }
            return;
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        permute(temp,ans,s,0);
        return ans;
    }
};