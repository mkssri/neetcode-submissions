class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> my_set;

        for (const int& element: nums) {
            
            if(my_set.contains(element))
                return true;

            my_set.insert(element);
        }

        return false;
    }
};