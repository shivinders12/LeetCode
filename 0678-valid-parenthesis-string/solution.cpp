            {
                min=min-1;
                max=max+1;
            }
            else{
                min=min-1;
                max=max-1;
            }
            if(min<0) min=0;
            if(max<0) return false;

        }
       
        if(min==0)return true;

        return false;   

    }
};
            }
            else if(s[i]=='*')
