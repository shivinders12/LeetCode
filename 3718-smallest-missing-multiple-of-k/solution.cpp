            if(nums[i]%k==0)
            {
                int x=nums[i]/k;
                if(x>=max)
                {
                    max=x;
                }
            }
        }

        for(int i=1;i<max;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==(k*i)) found=true;
            }
        }

            bool found=false;
            if(found==false) return i*k;
      


        return (max+1)*k;
