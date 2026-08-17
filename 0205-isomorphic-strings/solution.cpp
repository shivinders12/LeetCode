
            mp[s[i]] = t[i];
            used[t[i]] = true;
            if (used[t[i]])
                return false;

    for (int i = 0; i < s.length(); i++) {

        if (mp.find(s[i]) == mp.end()) {
            // s[i] is not mapped yet

    if (s.length() != t.length())
        return false;
    unordered_map<char, char> mp;
    unordered_map<char, bool> used;
