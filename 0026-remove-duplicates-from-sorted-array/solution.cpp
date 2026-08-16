class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int a=0;
    
        for(int b=1;b<n;b++ )
        {
            if(nums[b]!=nums[a])
            {
                nums[a+1]=nums[b];
                a++;

            }
