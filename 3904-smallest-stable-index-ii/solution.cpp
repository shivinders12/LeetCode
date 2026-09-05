        int maxi=INT_MIN;
        int mini=INT_MAX;
        vector<int> minim(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            mini=min(nums[i],mini);
            minim[i]=mini;
        }
        for(int i=0;i<nums.size();i++)
        {
            maxi= max(nums[i],maxi);
            int ans=maxi-minim[i];
            if(ans<=k)
            {
                return i;
            }
        }
public:
    int firstStableIndex(vector<int>& nums, int k) {

class Solution {
                return -1;
