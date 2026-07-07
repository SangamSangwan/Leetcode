class Solution {
public:
    double average(vector<int>& salary) {
        int min=1000001;
        int max=999;
        double avg =0;
        int n=salary.size();
        for(int i=0;i<n;i++)
        {
            avg+=salary[i];
            if(salary[i]>max) max=salary[i];
            if(salary[i]<min) min=salary[i]; 
        }
        return (avg-max-min)/(n-2);
    }
};