class Solution {
public:
    
    bool smaller(string &a, string &b) {
        if (a.length() != b.length())
            return a.length() < b.length();

        return a < b;   
    }

    void merge(vector<string>& nums, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;

        vector<string> temp;

        while (i <= mid && j <= right) {
            if (smaller(nums[i], nums[j])) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = left; k <= right; k++) {
            nums[k] = temp[k - left];
        }
    }

    void mergeSort(vector<string>& nums, int left, int right) {
        if (left >= right)
            return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }

    string kthLargestNumber(vector<string>& nums, int k) {
        mergeSort(nums, 0, nums.size() - 1);

        return nums[nums.size() - k];
    }
};