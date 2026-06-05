class Solution:
    def isPalindrome(self, s: str) -> bool:

        modified_s = ""
        for char in s:
            if char.isalnum():
                modified_s += char.lower()        
        
        l, r = 0, len(modified_s)-1

        while(l <= r):
            if (modified_s[l] != modified_s[r]):
                return False
            l += 1
            r -= 1

        return True


        