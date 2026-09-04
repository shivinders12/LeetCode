            if (sum + candidate[i] <= target)
            {
                sol.push_back(candidate[i]);
                solve(sol, ans, target, candidate,sum + candidate[i], i);
                sol.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> sol;

        solve(sol, ans, target, candidates, 0, 0);
        for (int i = index; i < candidate.size(); i++)
        {

        }
            return;
            ans.push_back(sol);
        {
        if (sum == target)
    {

        return ans;
