class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // target = 9 (1,2,3,8)
        int n = nums.size();
        unordered_map<int, int> mp;
        int complement;

        for(int i=0; i<n; i++)
        {
            complement = target-nums[i];

            if(mp.find(complement) != mp.end())
            {
                return {mp[complement], i};
            }

            mp.insert({nums[i], i});
        }
         
         return {};

        
    }
};
