for _ in range(int(input())):
    nums = list(map(int, input().split()))

    if (nums[0]+nums[1]) == nums[2]:
        print("+")
    else:
        print("-")