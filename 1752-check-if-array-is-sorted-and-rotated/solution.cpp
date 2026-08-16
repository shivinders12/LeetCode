class Solution {
public:
    bool nondec(vector<int>& nums)
    {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            return false;

        }
        return true ;
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
