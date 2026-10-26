
class Solution {
public:
    int check(TreeNode* root, int &ans) {
        if (root == nullptr) {
            return 0;
        }

        int x = max(0, check(root->left, ans));
        int y = max(0, check(root->right, ans));

        ans = max(ans, x + y + root->val);

        return root->val + max(x, y);
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        check(root, ans);
        return ans;
    }
};

