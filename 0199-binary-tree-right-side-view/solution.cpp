
        ans[l].push_back(root->val);

        level(root->left, ans, l + 1);
        level(root->right, ans, l + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> help;
        level(root, help, 0);

        vector<int> ans;
        for(int i=0;i<help.size();i++)
        {
            int x=help[i].size();
            ans.push_back(help[i][x-1]);
        }
        return ans;
        
    }
};
