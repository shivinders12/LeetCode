                    max=x;
                }
            }
        }

        for(int i=1;i<max;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
            bool found=false;
                if(nums[j]==(k*i)) found=true;
            }
            if(found==false) return i*k;
        }

      


        return (max+1)*k;

        
    }
};
