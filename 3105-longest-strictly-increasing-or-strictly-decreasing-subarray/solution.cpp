public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi = 1;
        int inc = 1, dec = 1;

            if (nums[i] > nums[i - 1]) {
        }
        for (int i = 1; i < n; i++) {
                inc++;
                dec = 1;
            maxi = max(maxi, max(inc, dec));
            } else if (nums[i] < nums[i - 1]) {
                dec++;
            } else {
                inc = 1;
        return maxi;
                inc = 1;
                dec = 1;
            }
    }
};
