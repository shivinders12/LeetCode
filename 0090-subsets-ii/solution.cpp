    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> sol;

        int n= nums.size();
    }
            if (i > index && nums[i] == nums[i-1]) continue;
        }
            solve(nums,ans,sol,n,i+1);

            
            
            sol.push_back(nums[i]);
            ans.push_back(sol);
            sol.pop_back();
        solve(nums,ans,sol,n,0);

        return ans;
        
    }
        vector<int> v;
        ans.push_back(v);
        sort(nums.begin(),nums.end());
};
