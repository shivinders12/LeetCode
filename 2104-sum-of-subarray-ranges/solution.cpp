class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        //contribution of element in no of nums[i]*(no of subarray it is max - no of subarray it is min)

        //brute force
         int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int mn = nums[i];
            int mx = nums[i];

            for (int j = i; j < n; j++) {
                mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);

                ans += mx - mn;
            }
        }

        return ans;
    }
};
