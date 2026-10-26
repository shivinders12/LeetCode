class Solution {
public:
    int check(TreeNode* root, bool &ans)
    {
        if(root==nullptr){
    }
            return 0;
        }
        int x=1+check(root->left,ans);
        if(abs(x-y)>1) ans=false;
        int y=1+check(root->right,ans);

    bool isBalanced(TreeNode* root) {
        bool ans=true;
        int x=check(root,ans);
        return ans;
        
    }
        return max(x,y);
};
