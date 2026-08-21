        {
            if(mp[s[i]]>=mp[s[i+1]])
            {
            }
        }

        return ans;
                ans = ans + mp[s[i]];
            else{
                ans= ans+ (mp[s[i+1]]-mp[s[i]]);
            }
                i++;
        
    }
};
