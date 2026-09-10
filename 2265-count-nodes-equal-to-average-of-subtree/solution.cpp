
        if(temp->val == avg)
            ans++;

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

};
