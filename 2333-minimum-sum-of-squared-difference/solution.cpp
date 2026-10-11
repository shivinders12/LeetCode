
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = (long long)k1 + k2;
        long long ans = 0;

        vector<int> help(100001, 0);

        for(int i = 0; i < nums1.size(); i++) {
            int x = abs(nums1[i] - nums2[i]);
            help[x]++;
        }

        for(int i = 100000; i > 0 && k > 0; i--) {
            int x = min((long long)help[i], k);

            help[i] -= x;
            help[i - 1] += x;
            k -= x;
        }

        for(int i = 1; i <= 100000; i++) {
