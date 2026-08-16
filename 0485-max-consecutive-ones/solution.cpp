class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;

        int i=0;
        int ones=0;
        while(i<nums.size())
        {
          
            if(nums[i]==1)
            {
                ones++;
            }
