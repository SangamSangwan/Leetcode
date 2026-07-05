class Solution {
public:
    void makematrix(vector<vector<int>>& m, int n, int& count,
                    int starti, int startj)
    {
        int right = n - startj - 1;
        int bottom = n - starti - 1;

       
        if (starti > bottom || startj > right)
            return;

        
        if (starti == bottom && startj == right)
        {
            m[starti][startj] = count++;
            return;
        }

        for (int j = startj; j <= right; j++)
            m[starti][j] = count++;

        for (int i = starti + 1; i <= bottom; i++)
            m[i][right] = count++;

        for (int j = right - 1; j >= startj; j--)
            m[bottom][j] = count++;

        for (int i = bottom - 1; i > starti; i--)
            m[i][startj] = count++;

        makematrix(m, n, count, starti + 1, startj + 1);
    }

    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> m(n, vector<int>(n, 0));
        int count = 1;

        makematrix(m, n, count, 0, 0);

        return m;
    }
};