class Solution {
public:

    void createGraph(TreeNode* root, TreeNode* parent,unordered_map<int, vector<int>>& adj) {

        if (root == nullptr)
            return;

        if (parent != nullptr) {
            adj[root->val].push_back(parent->val);
            adj[parent->val].push_back(root->val);
        }

        createGraph(root->left, root, adj);
        createGraph(root->right, root, adj);
    }

   
    void bfs(TreeNode* root, int k,unordered_map<int, vector<int>>& adj,vector<int>& ans) {

        queue<int> q;
        unordered_set<int> visited;
