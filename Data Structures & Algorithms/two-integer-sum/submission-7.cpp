class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> ele_to_idx_map;
    
    for (std::size_t i = 0; i < nums.size(); ++i) {
        ele_to_idx_map[nums[i]] = i;
    }

    int other_ele = 0;
    vector<int> result;

    for (std::size_t i = 0; i < nums.size(); ++i) {
        other_ele = target - nums[i];

        if (ele_to_idx_map.contains(other_ele) && (i != ele_to_idx_map[other_ele])) {
            result.push_back(i);
            result.push_back(ele_to_idx_map[other_ele]);

            return result;
        }
    }  
    return {};   
    }
};
