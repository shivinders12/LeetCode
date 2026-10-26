class Solution {
public:
    bool check(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr)
            return true;

        if (left == nullptr || right == nullptr)
            return false;

        if (left->val != right->val)
            return false;

        return check(left->left, right->right) && check(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }

 */
};
