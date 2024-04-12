for _ in range(int(input())):

    n = int(input())

    rev = list(map(int, input().split()))

    ans = 0

    for i in rev:

        if i == 1 or i == 3:
            ans += 1
    
    print(ans)