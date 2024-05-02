from math import gcd

for _ in range(int(input())):
    x = int(input())

    idx = -1
    ans = 0
    for i in range(x):
        aux = gcd(i,x)
        ans = max(aux + i, ans)
        idx = i

    print(idx)

