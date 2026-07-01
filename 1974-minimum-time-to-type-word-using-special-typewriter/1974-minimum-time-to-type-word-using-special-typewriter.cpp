class Solution {
public:
    int minTimeToType(string word) {
        char current='a';
        int sum=0;
        for(auto i : word)
        {
            sum += 1+min(int(abs(i-current)),26-int(abs(current-i)));
            current = i;
        }
        return sum;
    }
};