        if (ans.size() == l)
            ans.push_back({});

        ans[l].push_back(root->val);

        level(root->left, ans, l + 1);
        level(root->right, ans, l + 1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        level(root, ans, 0);
        return ans;
        int n=ans.size();
        for(int i=1;i<n;i=i+2)
        {
            reverse(ans[i].begin(),ans[i].end());
        }
        
    }
};
