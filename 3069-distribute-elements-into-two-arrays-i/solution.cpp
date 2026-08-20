            }

        }

    vector<int> ans(n);
    int n1=arr1.size();
    int n2=arr2.size();

    for(int i=0;i<n1;i++)
    {
        ans[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        ans[i+n1]=arr2[i];
    }

    return ans;


        
    }
