
            used[i] = 1;
            ans.push_back(nums[i]);

            solve(nums, ans, sol, used);

            ans.pop_back();
            used[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> sol;
        vector<int> ans;
        vector<int> used(nums.size(), 0);

        solve(nums, ans, sol, used);

        return sol;
    }
};
