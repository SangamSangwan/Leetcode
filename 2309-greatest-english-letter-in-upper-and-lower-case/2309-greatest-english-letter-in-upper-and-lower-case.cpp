class Solution {
public:
    string greatestLetter(string s) {
        bool upper[26] = {};
        bool lower[26] = {};

        for (char c : s) {
            if (islower(c))
                lower[c - 'a'] = true;
            else if (isupper(c))
                upper[c - 'A'] = true;
        }

        for (int i = 25; i >= 0; --i) {
            if (upper[i] && lower[i])
                return string(1, static_cast<char>('A' + i));
        }

        return "";
    }
};