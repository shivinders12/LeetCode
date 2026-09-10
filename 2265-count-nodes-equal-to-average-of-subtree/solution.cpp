
    }


        int leftSum = solve(ans, temp->left, leftCount);
        int rightSum = solve(ans, temp->right, rightCount);

        count = 1 + leftCount + rightCount;
        int sum = temp->val + leftSum + rightSum;

        int avg = sum / count;
        if (avg == temp->val) ans++;

        return sum;
class Solution {
public:
   int averageOfSubtree(TreeNode* root)
    {
        int ans = 0;

        solve(ans, root);

        return ans;
    }
