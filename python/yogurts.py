t = int(input())

for _ in range(t):
    n, a, b = map(int, input().split())


    if n % 2 == 0:
        unit = n//2
        ans1 = unit*b
    else:
        unit = n//2
        ans1 = (unit*b)+a

    ans2 = n*a


    print(min(ans1,ans2))


