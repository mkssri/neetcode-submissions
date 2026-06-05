class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> storage;

        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            if (storage.find(*it) != storage.end())
            storage[*it] += 1;
            else
            storage[*it] = 1; 
        }
        

        for (const auto &pair: storage) {
            if (pair.second == 1)
                return pair.first; 
        }

    }
};
