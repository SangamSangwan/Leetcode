class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> count(26,0);

        for(char c : s)
        {
            count[c-'a']++;
        }

        string left = "";
        char middle = '\0';

        for(int i=0;i<26;i++)
        {
            int half = count[i]/2;

            while(half--)
            {
                left += char(i+'a');
            }

            if(count[i]%2==1)
            {
                middle = char(i+'a');
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        string ans = left;

        if(middle != '\0')
            ans += middle;

        ans += right;

        return ans;
    }
};