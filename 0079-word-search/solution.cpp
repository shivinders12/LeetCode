
    bool exist(vector<vector<char>>& board, string word)
    {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> help(n, vector<int>(m, 0));

      
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(solve(i, j, 0, board, word, help))
                    return true;
            }
        }

        return false;
    }
};
