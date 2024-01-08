from typing import List


def twoSum(nums, target):
        num_dict = {}
        n = len(nums) 
        # create hash table map
        for i, num in enumerate(nums):
            num_dict[num] = i
        
        print("num dict", num_dict)
        for i in range(n):
              complement = target - nums[i]
              print("complement out",complement)
              if complement in num_dict and num_dict[complement] != i:
                    print("complement in",complement)
                    print("um dict complement",num_dict[complement])
                    return {i, num_dict[complement]}

print(twoSum(nums=[3,2,4],target=6))