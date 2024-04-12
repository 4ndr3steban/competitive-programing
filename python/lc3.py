class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        maxLength = 0
        charmap = {}
        l = 0
        
        for r in range(n):
            if s[r] not in charmap or charmap[s[r]] < l:
                charmap[s[r]] = r
                maxLength = max(maxLength, r - l + 1)
            else:
                l = charmap[s[r]] + 1
                charmap[s[r]] = r
        
        return maxLength

    
print(Solution().lengthOfLongestSubstring("pwwkewwwwwwwers"))