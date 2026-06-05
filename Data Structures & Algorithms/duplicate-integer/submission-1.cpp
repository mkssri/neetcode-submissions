class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> set_nums;

        for(auto &ele: nums)
        set_nums.insert(ele);

        return (set_nums.size() != nums.size());

    }
};
