import itertools

input = input().split()

nums = []
for perm in itertools.permutations(input):
  nums.append("".join(perm))

print(max(nums))