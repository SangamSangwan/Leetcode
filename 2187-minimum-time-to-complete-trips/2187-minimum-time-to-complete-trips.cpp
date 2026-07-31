class Solution {
public:

    bool checktrip(long long mid, vector<int>& time, int totalTrips)
    {
        long long sum = 0;

        for(int i=0;i<time.size();i++)
        {
            sum += mid/time[i];

            if(sum >= totalTrips)
                return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {

        long long i = 1;
        long long j = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;

        while(i < j)
        {
            long long mid = i + (j-i)/2;

            if(checktrip(mid, time, totalTrips))
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }

        return i;
    }
};