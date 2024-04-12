for _ in range(int(input())):
    n = int(input())
    nums = list(map(int, input().split()))

    prefsum = [0]
    curr = 0
    idx = 1

    for num in nums:
        
        if idx % 2 == 0:
            curr -= num
            prefsum.append(curr)
        else:
            curr += num
            prefsum.append(curr)
        idx += 1

    prefsum.sort()

    if any(prefsum[i]==prefsum[i+1] for i in range(n)):
        print("YES")
    else:
        print("NO")