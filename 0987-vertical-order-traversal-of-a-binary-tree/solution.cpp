        findRange(root, 0, minY, maxY);

        int offset = -minY;
        vector<vector<pair<int,int>>> cols(maxY - minY + 1);

        solve(root, 0, 0, cols, offset);

        vector<vector<int>> ans;
        for (auto& col : cols) {
            sort(col.begin(), col.end());   
            vector<int> vals;
            for (auto& p : col) vals.push_back(p.second);
            ans.push_back(vals);
        }

        return ans;
    }
};
