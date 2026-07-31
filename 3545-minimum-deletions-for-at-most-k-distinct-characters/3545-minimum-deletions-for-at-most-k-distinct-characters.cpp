class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int> freq(26,0);
        for(auto i:s)
        {
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end());
        int j=26-k-1;
        int sum=0;
        for(j;j>=0;j--)
        {
            sum += freq[j];
        }
        return sum;
    }
};