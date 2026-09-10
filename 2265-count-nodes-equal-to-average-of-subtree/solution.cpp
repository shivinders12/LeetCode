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
    }

};

