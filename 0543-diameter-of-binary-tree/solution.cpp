public:
    int check(TreeNode* root, int &ans)
    {
        if(root==nullptr){
            return 0;
        }
        int x=1+check(root->left,ans);
        int y=1+check(root->right,ans);

        ans=max(ans,x+y-2);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;;
        int x=check(root,ans);
        return max(x,y);
        return ans;
        
    }
};
