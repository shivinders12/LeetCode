    int minMoves(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)

        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
        }
        int ans=0;
    
public:
class Solution {
        {
            ans=ans+maxi-nums[i];
        }
        return ans;
    }
};
