
        int avg = sum / count;

        if(temp->val == avg)
            ans++;
        int sum = temp->val + left.first + right.first;
        int count = 1 + left.second + right.second;


        pair<int, int> left = solve(ans, temp->left);
        pair<int, int> right = solve(ans, temp->right);
            return {0, 0};
    {
        if(temp == nullptr)
     pair<int, int> solve(int &ans, TreeNode* temp)

 */
 * };
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), 
 right(right) {}
 *     TreeNode *right;
 *     TreeNode *left;
