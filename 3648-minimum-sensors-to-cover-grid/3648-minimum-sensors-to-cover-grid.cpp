class Solution {
public:
    int minSensors(int n, int m, int k) {
        int sath = 2*k+1;
        int colneed1= (m+sath-1)/sath;
        int rowneed1=(n+sath-1)/sath;
        
        return rowneed1*colneed1;
    }
};