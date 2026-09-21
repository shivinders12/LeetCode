    
    int next(int price) {
        
        vt.push_back(price);
        int x=vt.size();
        int maxcount=0;
        int count=0;
     

        for(int i=x-1;i>=0;i--)
        {
            if(vt[i]<=price)
            {
                count++;
                maxcount=max(maxcount,count); 
            }
            else{break;}
        } 
  
        return maxcount;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
