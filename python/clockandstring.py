for _ in range(int(input())):
    a, b, c, d = map(int, input().split())

    if (min(a,b) < c < max(a,b) and (d > max(a,b) or d < min(a,b))) or (min(a,b) < d < max(a,b) and (c > max(a,b) or c < min(a,b))):
        print("YES")
    else:
        print("NO")