class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> po;
        vector<int> ne;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
                po.push_back(nums[i]);
            else
