        if (ans.size() == l)
            ans.push_back({});

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
            ans.push_back(help[i][x-1]);
            int x=help[i].size();
        }
        return ans;
        
    }
};
