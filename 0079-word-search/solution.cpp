
        return ans;
    }

       
        help[i][j] = 0;
            solve(i, j - 1, k + 1, board, word, help);

            solve(i + 1, j, k + 1, board, word, help) ||
            solve(i - 1, j, k + 1, board, word, help) ||
            solve(i, j + 1, k + 1, board, word, help) ||
        bool ans =

       
        help[i][j] = 1;
        

            return false;
        if(!isValid(i, j, k, help, board, word))
       
        if(k == word.length())
            return true;

        
    {
    bool solve(int i, int j, int k,vector<vector<char>>& board,string& word,vector<vector<int>>& help)
