class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        
        vector<int> freq_counter(26, 0);


        for (size_t idx = 0; idx < s.size(); idx++) {
            freq_counter[s[idx] - 'a'] += 1;
            freq_counter[t[idx] - 'a'] -= 1;
        }

        for (std::vector<int>::iterator it = freq_counter.begin(); it != freq_counter.end(); it++) {
            if (*it != 0) return false;
        }
        return true;
    }
};
