for _ in range(int(input())):
    
    nums = []

    for i in range(4):
        nums.append(tuple(map(int, input().split())))

    nums = sorted(nums)

    area = abs(nums[0][1] - nums[1][1]) * abs(nums[1][0] - nums[2][0])

    print(area) 