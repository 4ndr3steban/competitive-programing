from itertools import permutations
from collections import deque

for _ in range(int(input())):
    n, k = list(map(int, input().split()))

    prob = [i for i in range(1, n+1)]

    ans = deque()
    ans.append(prob[0])

    for i in range(n-k, n):
        ans.append(prob[i])

    for i in range(n-k-1, 0, -1):
        ans.append(prob[i])

    if k == 0:
        print(*list(reversed(prob)))
    else:
        print(*ans)


    