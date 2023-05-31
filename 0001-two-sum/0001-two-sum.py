class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        idx = {}
        for i in range(len(nums)):
            if target - nums[i] in idx:
                return [idx[target-nums[i]],i]
            idx[nums[i]] = i
        
#         l = len(nums)
#         for i in range(l):
#             for j in range(i+1,l):
#                 if nums[i]+nums[j] == target:
#                     return [i,j]
        
            
    
        