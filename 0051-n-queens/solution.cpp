
        }
        
        i = row - 1;
        j = col + 1;

        while(i >= 0 && j < n)
        {
            if(help[i][j] == "Q")
                return false;

            i--;
            j++;
        }

        return true;
    }


    void solve(vector<vector<string>>& ans,
               int n,
               int k,
               vector<string>& solution,
               vector<vector<string>>& help)
    {
   
