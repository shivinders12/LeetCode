                else {
                        ans++;
                    }
                    i++; 
                }
                    {
                   
                    if (!st.empty()) {
                        st.pop();
                    } else {
                        ans++; 
                    }
                    ans++; 
                }
            }

        }
        ans += 2 * st.size();
        return ans;
        
    }
};
