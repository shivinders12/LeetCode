        }

      
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }
        if(nums[0]==nums[n-1]) return -1;
        bool first = true;
        bool last = true;

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] == nums[0]) {
                first = false;
            }

            if (nums[i] == nums[n - 1]) {
                last = false;
            }
        }

        if (first && last) {
            return max(nums[0], nums[n - 1]);
