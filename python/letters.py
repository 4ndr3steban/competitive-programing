for _ in range(int(input())):
    n = int(input())

    a = input()
    b = input()
    c = input()

    flag = False
        
    for i in range(n):
        if c[i] != b[i] and c[i] != a[i]:
            flag = True
    

    if flag:
        print("YES")
    else:
        print("NO")
