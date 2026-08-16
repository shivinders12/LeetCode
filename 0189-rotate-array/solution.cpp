        reverse(nums,0,k-1);
        reverse(nums,k,n-1);

        for(int index : nums)
        {
            cout<<index;
        }


    }
    void reverse(vector<int>& nums,int start, int end)
    {
        while(start<end){
            int temp =nums[start];
            nums[start]=nums[end];
