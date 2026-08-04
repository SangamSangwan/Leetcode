class Solution {
public:
    bool isBalanced(string num) {
        int odd=0;
        int even=0;
        int n=num.length()-1;
        while(n>=0)
        {
            odd += (num[n])-'0';
            n--;
            if(n>=0)
            {
                even += (num[n]-'0');
                n--;
            }
        }
        return (odd==even?true:false);
    }
};