class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,int> mp;
        int mindiff=INT_MAX;
        for(int i=0;i<cards.size();i++)
        {
            if(mp.count(cards[i]))
            {
                mindiff = min(mindiff,1+i-mp[cards[i]]);
                mp[cards[i]]=i;
            }
            else
            {
                mp[cards[i]]=i;
            }
        }
        if(mindiff==INT_MAX) return -1;
        return mindiff;
    }
};