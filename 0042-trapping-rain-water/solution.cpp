class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        

        vector<int> prefixMax(n);
        vector<int> suffiMax(n);

        suffiMax[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--) {
            suffiMax[i] = max(height[i], suffiMax[i+1]);
        }

