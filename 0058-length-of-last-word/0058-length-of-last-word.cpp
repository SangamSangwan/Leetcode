class Solution {
public:
    int lengthOfLastWord(string s) {
        int start=0;
        int wordend=0;
        int end=0;
        int i=0;
        while(i<s.length())
        
        {
            if(i < s.length() && s[i]==' ')
            {
            while(i < s.length() && s[i]== ' ')
            {
                end = i;
                i++;
                
            }
            }
            else if(i<s.length() && s[i]!=' ')
            {
                start=i;
                while(i<s.length() && s[i]!=' ')
                {
                    wordend=i;
                    i++;
                }

            }

        }
        return wordend-start+1;
    }
};