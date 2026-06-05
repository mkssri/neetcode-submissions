class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> my_set;
        for (int num: nums) {
            my_set.insert(num);
        }

        return my_set.size() != nums.size();
    }
};