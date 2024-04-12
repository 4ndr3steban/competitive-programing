for _ in range(int(input())):

    n = int(input())

    nums = list(map(int, input().split()))

    nums.sort()
    ans, s = 0, 0

    for i in range(n):
        
        if i > 0 and nums[i] != nums[i -1]:
            s = 0
        ans += s
        s += i

    print(ans)

    