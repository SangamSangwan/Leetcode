class Solution {
public:
    int sq(int x)
    {
        return x*x;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> d;
        d.push_back(sq(p1[0]-p2[0]) + sq(p1[1]-p2[1]));
        d.push_back(sq(p2[0]-p3[0]) + sq(p2[1]-p3[1]));
        d.push_back(sq(p3[0]-p4[0]) + sq(p3[1]-p4[1]));
        d.push_back(sq(p4[0]-p1[0]) + sq(p4[1]-p1[1]));
        d.push_back(sq(p1[0]-p3[0]) + sq(p1[1]-p3[1]));
        d.push_back(sq(p2[0]-p4[0]) + sq(p2[1]-p4[1]));
        map<int,int> mp;
        for(int i=0;i<d.size();i++)
        {
            if(d[i]==0) return false;
            if(mp.find(d[i])==mp.end())
            {
                mp[d[i]]=1;
            }
            else
            {
                mp[d[i]]++;
            }
        }
        for(auto i : mp)
        {
            if(i.second!=4 && i.second!=2) return false;
        }
        if (mp.size() != 2) return false;
        return true;
    }
};