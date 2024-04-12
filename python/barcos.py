from collections import deque
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    l = deque(map(int, input().split()))

    der = 0
    izq = 0
    ans = 0

    if k%2 == 0:
        der = k//2
        izq = k//2
    else:
        der = k//2+1
        izq = k//2

    while der>0 and l:
        right = l.popleft()

        if der < right:
            l.appendleft(right-der)
        else:
            ans+=1

        der -= right

    while izq>0 and l:
        left = l.pop()

        if izq < left:
            l.append(left-der)
        else:
            ans+=1

        izq -= left
    
    print(ans)


