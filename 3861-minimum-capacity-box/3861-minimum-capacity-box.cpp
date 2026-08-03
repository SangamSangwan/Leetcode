class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int minind=-1;
        for(int i=0;i<capacity.size();i++)
        {
            if(capacity[i]>=itemSize )
            {
                if(minind==-1 || capacity[i]<capacity[minind])
                {
                    minind = i;
                }
            }
            
        }
        return minind;
    }
};