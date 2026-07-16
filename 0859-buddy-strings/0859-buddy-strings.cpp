class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int count=0;
        int n=s.length();
        int m=goal.length();
        if(m!=n) return false;
        int diff=0;
        int alike1[26]={0};
        int alike2[26]={0};
        int maxlike=0;
        if(n==1) return false;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=goal[i]) 
            {
                
                count++;
                
            }
            alike1[s[i]-'a']++;
            alike2[goal[i]-'a']++;
            maxlike = max(maxlike,alike1[s[i]-'a']);
            if(count>2) return false;
        }
        
        if(count == 2)
        {
            for(int i=0;i<26;i++)
            {
                if(alike1[i]!=alike2[i]) return false;
            }
            return true;
        }
        if(count==0 && maxlike>=2) return true;
        return false;
    }
};