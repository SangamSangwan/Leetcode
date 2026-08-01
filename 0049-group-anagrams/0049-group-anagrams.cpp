class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for(auto i : strs)
        {
            int freq[26]={0};
            for(auto j:i)
            {
                freq[j-'a']++;
            }
            string s;
            for(int k=0;k<26;k++)
            {
                s += to_string(freq[k]);
                s+='#';
            }
            mp[s].push_back(i);
        }
        for(auto it : mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};