class Solution {
public:
    int numberOfSteps(int num) {
        int count =0;
        int n = num;
        while(n>0)
        {
            if(n&1)
            {
                n -= 1;
            }
            else
            {
                n = n/2;
            }
            count++;
        }
        return count;
    }
};