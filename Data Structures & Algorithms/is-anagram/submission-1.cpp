class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        
        int nums[26]={0};

        for(char x: s) {
            int idx = x-'a';
            nums[idx] += 1;
        }

        for(char x:t) {
            int idx = x-'a';
            nums[idx] -= 1;
        }

        for(int x: nums) {
            if(x==0)
            continue;
            else
            return false;
        }
        return true;
    }
};
