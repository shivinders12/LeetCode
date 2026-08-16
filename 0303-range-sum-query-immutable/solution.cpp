class NumArray {
public:
 vector<int> presum;
    NumArray(vector<int>& nums) {
       
        
        int n = nums.size();
        presum.resize(n);
        presum[0]=nums[0];
        for(int i=1;i<n;i++){
            presum[i]=presum[i-1]+nums[i];
        }
        
    }
