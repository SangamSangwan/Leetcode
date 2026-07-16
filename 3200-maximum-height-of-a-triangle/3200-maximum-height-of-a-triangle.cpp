class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int red1=red;
        int blue1 = blue;
        int req=0;
        int chance1=0;
        while(1)
        {
            req++;
            if(chance1%2==0)
            {
                red = red-req;
                if(red<0) break;
            }
            else
            {
                blue = blue-req;
                if(blue<0) break;
            }
            chance1++;
        }
        req=0;
        int chance2=0;
        while(1)
        {
            req++;
            if(chance2%2==0)
            {
                blue1 = blue1-req;
                if(blue1<0) break;
            }
            else
            {
                red1 = red1-req;
                if(red1<0) break;
            }
            chance2++;
        }
        return max(chance1,chance2);
    }
};