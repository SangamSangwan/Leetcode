class Solution {
public:
    int minOperations(vector<string>& logs) {
        int dist=0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../")
            {
                if(dist==0)
                {
                    continue;
                }
                else
                {
                    dist--;
                }
            }
            else if (logs[i]=="./") 
            {
                continue;
            }
            else
            {
                dist++;
            }
        }
        return dist;
    }
};