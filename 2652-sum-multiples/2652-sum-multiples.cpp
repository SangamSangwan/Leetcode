class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=3;i<=n;i= i+3)
        {
            sum+=i;
        }
        for(int i=5;i<=n;i= i+5)
        {
            sum+=i;
        }
        for(int i=7;i<=n;i= i+7)
        {
            sum+=i;
        }
        for(int i=15;i<=n;i= i+15)
        {
            sum-=i;
        }
        for(int i=21;i<=n;i= i+21)
        {
            sum-=i;
        }
        for(int i=35;i<=n;i= i+35)
        {
            sum-=i;
        }
        for(int i=105;i<=n;i= i+105)
        {
            sum+=i;
        }
        return sum;
    }
};