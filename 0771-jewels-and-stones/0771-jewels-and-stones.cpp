class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        int sum=0;
        for(int i=0;i<jewels.length();i++)
        {
            m.insert({jewels[i],0});
        }
        for(int i=0;i<stones.length();i++)
        {
            if(m.count(stones[i])) sum++;;
        }
        return sum;
    }
};