    int getmaxfreq(vector<int> v)
    {

        int max=0;
        for(int i=0;i<26;i++)
        {
            if(v[i]>max)
            {   
                max=v[i];
            }
        }
        return max;
    }
    int getminfreq(vector<int> v)
    {
        int min=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(v[i]!=0 && v[i]<min)
