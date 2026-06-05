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

        for (const auto& pair : map1)
            if (map1[pair.first] != map2[pair.first]) return false;
        return true;
    }
};
