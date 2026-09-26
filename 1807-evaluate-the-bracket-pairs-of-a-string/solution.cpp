            while (st.back() != '(') {
            key.push_back(st.back())
            string key;
            }

            st.pop_back();
          
            st.pop_back();

             reverse(key.begin(), key.end());

            if (mp.count(key))
            st += mp[key];
            else
            st += '?';
            }
        }

        return st;
    }
};
