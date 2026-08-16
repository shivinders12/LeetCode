        }
        for(int i=0;i<t.length();i++)
        {
            asc2[i]=t[i];
        }
        sort(asc1.begin(), asc1.end());
        bool ans=true;

        for(int i=0;i<s.length();i++)
        {
            if(asc1[i]!=asc2[i])
            {
                ans=false;
            }
        sort(asc2.begin(), asc2.end());
