from math import gcd

for _ in range(int(input())):

    n = int(input())
    v = list(map(int, input().split()))
    gcds = []
    for i in range(0, n-1, 1):
        gcds.append(gcd(v[i], v[i+1]))

    ans = 0
    for i in range(len(gcds)-1):
        if gcds[i+1] < gcds[i]:
            ans += 1

    print(gcds)
    if ans >= 2: print("NO")
    else: print("YES")

