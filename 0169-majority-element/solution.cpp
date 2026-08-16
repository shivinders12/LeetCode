class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int maxfreq=1;
        int maj=nums[0];
        int currfreq=1;
         int curr = nums[0];

       for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == curr)
            {
