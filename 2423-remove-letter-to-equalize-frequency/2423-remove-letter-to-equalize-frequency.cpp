class Solution {
public:
    bool equalFrequency(string word) {
        int arr[26] = {0};

        for (char c : word)
            arr[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) continue;

            arr[i]--;         

            int freq = 0;
            bool ok = true;

            for (int j = 0; j < 26; j++) {
                if (arr[j] == 0) continue;

                if (freq == 0)
                    freq = arr[j];
                else if (arr[j] != freq) {
                    ok = false;
                    break;
                }
            }

            arr[i]++;         

            if (ok) return true;
        }

        return false;
    }
};