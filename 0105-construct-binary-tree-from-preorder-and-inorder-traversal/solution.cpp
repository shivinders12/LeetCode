        }

        // Construct left subtree
        root->left = build(preorder, inorder,
                           preIndex, inStart, pos - 1);

      
        root->right = build(preorder, inorder,
                            preIndex, pos + 1, inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        int preIndex = 0;

        return build(preorder, inorder, preIndex,
                     0, inorder.size() - 1);
    }
};
