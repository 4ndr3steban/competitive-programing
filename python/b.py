from collections import deque

for _ in range(int(input())):
    cadena = input()

    ans = deque()

    may = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    minu = "abcdefghijklmnopqrstuvwxyz"

    del_may = 0
    del_min = 0

    for i in cadena[::-1]:
        if i == "B":
            del_may += 1
        elif i == "b":
            del_min += 1
        elif i in may and del_may > 0:
            del_may -= 1
        elif i in minu and del_min > 0:
            del_min -= 1
        else:
            ans.appendleft(i)
    
    print("".join(ans))
