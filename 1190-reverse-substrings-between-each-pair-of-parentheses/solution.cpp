        {
            if(ans.length()==0 || s[i]!=')')
            {
                ans.push_back(s[i]);
            }
            if(s[i]==')')
            {
                string help;
                while(ans.back()!='(')
                {
                    char x=ans.back();
                    help.push_back(x);
                    ans.pop_back();
                }
                ans.pop_back();
                ans=ans+help;
            }
            
        }

        return ans;
        
    }
};
