
        while (curr != NULL || !st.empty()) {
            while (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            ans.push_back(curr->val);

            curr = curr->right;
        }
        TreeNode* curr = root;
        stack<TreeNode*> st;
        vector<int> ans;
        //itervative


        return ans;
    }
};
