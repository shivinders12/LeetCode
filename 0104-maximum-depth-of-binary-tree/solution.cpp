 */
class Solution {
public:
    void level(TreeNode* root, vector<vector<int>>& ans, int l) {
        if (root == nullptr)
            return;

        if (ans.size() == l)
            ans.push_back({});

        ans[l].push_back(root->val);

        level(root->left, ans, l + 1);
        level(root->right, ans, l + 1);
    }
    int maxDepth(TreeNode* root) {
        
        vector<vector<int>> ans;
        level(root, ans, 0);
        return ans.size();
    }
};
