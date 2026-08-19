            }

          
            if(!ans.empty())
            {
                ans += ' ';
            }

            ans += s.substr(j + 1, i - j);

           
            i = j - 1;
        }

        return ans;
    }
};
