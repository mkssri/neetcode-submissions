class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::map<int,int> hash_map;
        std::vector<int>::iterator ptr;
        std::map<int, int>::iterator ptr1;

        for(ptr=nums.begin(); ptr!=nums.end(); ptr++)
        {
            if(hash_map.find(*ptr)!=hash_map.end())
            {
                hash_map[*ptr] += 1;
            }
            else {
                hash_map[*ptr]=1;
            }
        }

        for(ptr1=hash_map.begin(); ptr1!=hash_map.end(); ptr1++)
        {
            if(ptr1->second>1)
            return true;
        }
        return false;
    }
};
