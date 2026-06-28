class Solution {
public:
    int minimumChairs(string s) {
        int used=0;
        int totalchair=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='E')
            {
                used++;
                totalchair = max(totalchair,used);
            }
            else if (totalchair==0)
            {
                continue;
            }
            else
            {
                used--;
            }
        }
        return totalchair;
    }
};