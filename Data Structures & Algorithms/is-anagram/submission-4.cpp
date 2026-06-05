class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (int i=0; i < s.size(); i++)
        {
            map1[s[i]] += 1;
            map2[t[i]] += 1;
        }

        for (int i=0; i < map1.size(); i++)
            if (map1[s[i]] != map2[s[i]]) return false;
        return true;
    }
};
