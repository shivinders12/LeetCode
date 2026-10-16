        {
            if(hash[s[r]]!=-1)
        }
            {
                if(hash[s[r]]>=l)
            }
                {
                    l=hash[s[r]]+1;
                }

            int len=r-l+1;
            maxlen=max(maxlen,len);
            hash[s[r]]=r;
            r++;

        return maxlen;
        
    }
};
        int r=0;
        vector<int> hash(255,-1);

        int maxlen=0;
        while(r<s.size())
