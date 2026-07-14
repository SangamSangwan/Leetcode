class Solution {
public:
    int maxArea(vector<int>& height) {
        long long r = height.size()-1;
        long long minarea=0;
        long long area=0;
        long long l =0;
        while(r>l)
        {
            area = min(height[l],height[r])*(r-l);
            minarea=max(minarea,area);
            if(height[r]<height[l]) r--;
            else l++;
        }
        return minarea;
    }
};