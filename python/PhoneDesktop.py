from math import ceil

for _ in range(int(input())):

    x, y = map(int, input().split())

    tam4 = ceil(y/2)

    total = (15*tam4) - y*4 - x

    if total < 0:
        tam4 += ceil(abs(total)/15)
    
    print(tam4)

