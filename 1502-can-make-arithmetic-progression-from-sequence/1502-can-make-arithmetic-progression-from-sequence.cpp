class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return true;
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i=1;i<n-1;i++)
        {
            if((arr[i]+d != arr[i+1])) return false;
        }
        return true;
    }
};