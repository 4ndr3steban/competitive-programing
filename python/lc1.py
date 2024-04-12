from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic_nunms = {nums[i]: i for i in range(len(nums))}
        
        for i in range(len(nums)):
            try:
                ans = dic_nunms[target-nums[i]]
                if ans == i:
                    continue
                return [i, ans]
                
            except:
                continue
        
        return []



print(Solution().twoSum( nums=[3,3], target=6))