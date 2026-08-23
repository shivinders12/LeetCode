
        int ans = 0;

        for(int x : st)
        {
            if(st.find(x - 1) == st.end())
            {
                int curr = x;
                int count = 1;

                while(st.find(curr + 1) != st.end())
                {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};
