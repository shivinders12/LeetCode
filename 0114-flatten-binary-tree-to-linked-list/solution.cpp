class Solution {
public:
   TreeNode* prev = nullptr;

    void flatten(TreeNode* root) {


        flatten(root->right);
        if (root == nullptr)
            return;
      
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;


        prev = root;
    }
};
