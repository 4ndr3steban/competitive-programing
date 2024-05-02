for _ in range(int(input())):
    n, m = map(int, input().split())

    a = input()
    b = input()

    idx = 0
    ans = 0

    for i in b:
        if idx == n: break

        if i == a[idx]:
            ans += 1
            idx += 1
    
    print(ans)