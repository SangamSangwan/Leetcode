class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int temp=x;
        long long n =0;
        while(temp!=0)
        {
            n = n*10 + (temp%10);
            temp=temp/10;
        }
        if(x==n) return true;
        else return false;
    }
};