"""nums = list(map(int, input().split()))

ln = int(str(nums[0])[-1])
count = 0

if ln < nums[1]:
    while ln < nums[1]:
        ln += 1
        count += 1
else:
    while ln < (10 + nums[1]):
        ln += 1
        count += 1

print(nums[0] + count)"""


a = "asdf"

print(a[::-1])