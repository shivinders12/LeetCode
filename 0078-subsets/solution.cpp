            sol.push_back(nums[i]);
            ans.push_back(sol);
            solve(nums,ans,sol,n,i+1);
            sol.pop_back();
            

        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> sol;
        int n= nums.size();
        vector<int> v;
        ans.push_back(v);
        sort(nums.begin(),nums.end());

        solve(nums,ans,sol,n,0);

        return ans;
        
    }
};
