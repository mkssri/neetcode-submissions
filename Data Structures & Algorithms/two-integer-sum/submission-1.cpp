class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> mp;
        int                          complement;

        for (int idx=0; idx < nums.size(); idx++)
        {
            complement = target - nums[idx];

            if (mp.find(complement) != mp.end())
                return {mp[complement], idx};
            
            mp.insert({nums[idx], idx});
        }
    }
};
