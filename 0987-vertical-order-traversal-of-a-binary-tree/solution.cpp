    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if (root == nullptr) return {};
    }

        findRange(root->left,  y - 1, minY, maxY);
        findRange(root->right, y + 1, minY, maxY);

        minY = min(minY, y);
        maxY = max(maxY, y);
        if (root == nullptr) return;

    void findRange(TreeNode* root, int y, int& minY, int& maxY) {

    }
        solve(root->right, x + 1, y + 1, ans, offset);
        solve(root->left,  x + 1, y - 1, ans, offset);


        ans[y + offset].push_back({x, root->val});
        if (root == nullptr) return;
class Solution {
public:
    void solve(TreeNode* root, int x, int y, vector<vector<pair<int,int>>>& ans, int offset) {
