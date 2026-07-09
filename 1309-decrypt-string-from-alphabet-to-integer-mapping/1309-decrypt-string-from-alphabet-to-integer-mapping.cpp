class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";

        int i = s.length() - 1;

        while (i >= 0) {
            if (s[i] == '#') {
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                ans += char('a' + num - 1);
                i -= 3;
            } else {
                int num = s[i] - '0';
                ans += char('a' + num - 1);
                i--;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};