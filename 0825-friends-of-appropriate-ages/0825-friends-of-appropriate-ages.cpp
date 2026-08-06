class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n = ages.size();
        vector<int> vec(121,0);
        for(int i : ages){
            vec[i]++;
        }
        int count = 0;
        for(int i=15;i<=120;i++){
            if(vec[i]==0) continue;
            for(int j=15;j<=120;j++){
                if(vec[j]==0) continue;
                if(j > 0.5 * i + 7 && j <= i){
                    if(i!=j){
                        count+= vec[i] * vec[j];
                    }
                    else{
                        count+= vec[i] * (vec[j] - 1);
                    }

                }
            }
        }
        return count;
    }
};