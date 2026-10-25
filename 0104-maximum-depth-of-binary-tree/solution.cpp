 */
class Solution {
public:
    void maxdcal(TreeNode* root,int level,int &ans)
    int maxDepth(TreeNode* root) {
 * };
        int maxd=0;
    {
        ans=max(ans,level);
    }
        if(root==nullptr)
        {
            return;
        }
        if(root==nullptr) return 0;
        maxdcal(root,1,maxd);
        maxdcal(root->left,level+1,ans);
        maxdcal(root->right,level+1,ans);
        return maxd;
    }
};
