class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int arr[26]={0};
        for(auto i:text)
        {
            arr[i-'a']++;
        }
        string s = "balon";
        
        int sum=10000;
        for(auto i:s)
        {
            if(i=='l' || i=='o')
            {
                sum = min(sum,arr[i-'a']/2);
            }
            else
            {
                sum = min(sum,arr[i-'a']);
            }
        }
        return sum;
    }
};