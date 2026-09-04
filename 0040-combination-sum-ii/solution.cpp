        {
            if (sum + candidate[i] <= target)
            {
                sol.push_back(candidate[i]);
                solve(sol, ans, target, candidate,sum + candidate[i], i+1);
                sol.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        for (int i = index; i < candidate.size(); i++)
        }

            return;
        {
            ans.push_back(sol);
    void solve(vector<int>& sol, vector<vector<int>>& ans,int target, vector<int>& candidate,int sum, int index)
    {
        if (sum == target)
public:
class Solution {
            if (i > index && candidate[i] == candidate[i-1]) continue;
        vector<vector<int>> ans;
