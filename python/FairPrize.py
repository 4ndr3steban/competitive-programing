n, p = map(int, input().split())

prizes = list(map(int, input().split()))

ans = 0

for i in prizes:
    if  ans < i <= p:
        ans = i

print(ans)