class Solution {
public:
    void solve(string& digits,int index,string& output,vector<string>& ans,string map[])
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        
        for(auto i : map[digits[index]-'0'])
        {
            output+=i;
            solve(digits,index+1,output,ans,map);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string output="";
        int index=0;
        solve(digits,index,output,ans,map);
        return ans;
    }
};