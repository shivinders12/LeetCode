        if(temp==nullptr) return 0;
        int x=3;
        if(temp->left==nullptr) x--;
        if(temp->right==nullptr) x--;
        int rightsum=solve(ans,temp->right);
        int leftsum=solve(ans,temp->left);
        int sum = temp->val+ leftsum+rightsum;

        int avg=sum/x;
        if(avg==temp->val) ans++;
        return sum;

    }


class Solution {
public:
   int averageOfSubtree(TreeNode* root)
    {
        int ans = 0;

        solve(ans, root);

        return ans;
