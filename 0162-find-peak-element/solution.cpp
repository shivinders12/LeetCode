        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[mid + 1]) {
                e = mid;
            } else {
                s = mid + 1;
            }
        int e = nums.size() - 1;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
