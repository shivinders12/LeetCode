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
            {
                min=v[i];
            }

        }
        return min;
    }
};
