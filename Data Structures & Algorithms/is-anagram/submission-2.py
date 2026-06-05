class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if (len(s) != len(t)):
            return False

        arr1 = [0]*26 
        arr2 = [0]*26

        for i in range(len(s)):
            idx1 = ord(s[i]) - ord('a')
            arr1[idx1] += 1

            idx2 = ord(t[i])-ord('a')
            arr2[idx2] += 1
        
        for i in range(len(arr1)):
            if (arr1[i] != arr2[i]):
                return False
        
        return True
    



        