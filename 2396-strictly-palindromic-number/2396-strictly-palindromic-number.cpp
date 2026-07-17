class Solution {
public:
    string findbase(int temp, int base)
{
    string s = "";
    while(temp)
    {
        s += char((temp % base) + '0');
        temp /= base;
    }
    return s;
}
    bool isStrictlyPalindromic(int n) {
        string s ="";
        

        for(int i=2;i<=n-2;i++)
        {
            string base = findbase(n,i);
            string now = base;
            reverse(base.begin(),base.end());
            if(base!=now) return false; 
        }
        return true;
    }
};