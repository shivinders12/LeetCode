        int lsum=0;
        int rsum=0;
        int maxsum=0;
        for(int i=k-1;i>=0;i--)
        for(int i=0;i<k;i++)
        {
            lsum=lsum+cardPoints[i];
        }
        maxsum=lsum;


        return maxsum;
        {
            lsum=lsum-cardPoints[i];
        }
            rsum=rsum+cardPoints[ridx];
        int ridx=cardPoints.size()-1;
            ridx--;
            maxsum=max(maxsum,lsum+rsum);
    }
};
