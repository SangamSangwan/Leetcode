class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for (int x : arr) {
            sum += x;
        }

        if (sum % 3 != 0) return false;

        int part = sum / 3;
        int temp = 0;
        int turn = 0;

        for (int i = 0; i < arr.size(); i++) {
            temp += arr[i];

            if (temp == part) {
                turn++;
                temp = 0;
            }
        }

        return turn >= 3;
    }
};