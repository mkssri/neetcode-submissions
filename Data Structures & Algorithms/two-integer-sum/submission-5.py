class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        valToIdxMap = {}

        for idx2 in range(len(nums)):
            valToIdxMap[nums[idx2]] = idx2

        for k,v in valToIdxMap.items():
            print("k: {} and v: {}".format(k,v))
        
        for idx1 in range(len(nums)):
            val = target - nums[idx1]

            if ((val in valToIdxMap) and (idx1 != valToIdxMap[val])):
                return [idx1, valToIdxMap[val]]

