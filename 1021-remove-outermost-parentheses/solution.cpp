                if(std.empty()==true && st!=end)
                {   
                    for(int i=st+1;i<end;i++)
                    {
                    
                        ans= ans + s[i];
                    }
                    st=i+1;
                    end=i;
                }

            }


        }
        return ans;
        
    }
};
            }
            else{
                end++;
                std.pop();
