
        int avg = sum / count;

        if(temp->val == avg)
            ans++;

        pair<int, int> right = solve(ans, temp->right);

        int sum = temp->val + left.first + right.first;
        int count = 1 + left.second + right.second;
        return {sum, count};
    }

class Solution {
public:
   int averageOfSubtree(TreeNode* root)
    {
        int ans = 0;

        solve(ans, root);

        return ans;
    }

