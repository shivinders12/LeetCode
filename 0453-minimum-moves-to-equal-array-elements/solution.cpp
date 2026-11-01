            
        //         nums[i]+=x;
            
        //     }
        //     ans+=x;
        // }
        // return ans;
        int mini = *min_element(nums.begin(), nums.end());

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += nums[i] - mini;
        }

        return ans;
    }
};
