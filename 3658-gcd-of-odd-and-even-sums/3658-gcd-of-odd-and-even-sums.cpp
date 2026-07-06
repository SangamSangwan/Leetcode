class Solution {
public:
    int findgcd(int sumodd,int sumeven)
    {
        int d=0;
        while(1)
        {
            
            d = sumeven-sumodd;
            sumodd=d;
            if(sumodd == 0) return sumeven;
            sumeven = sumodd;
            
        }
    }
    int gcdOfOddEvenSums(int n) {
        int sumodd =0;
        int sumeven=0;
        for(int i=1;i<=2*n;i=i+2)
        {
            sumodd += i;
            sumeven += (i+1);
        }
        return findgcd(sumodd,sumeven);
    }
};