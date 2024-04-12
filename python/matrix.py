t = int(input())

for _ in range(t):
    n, c, d = map(int, input().split())
    matint = list(map(int, input().split()))


    mat = []
    init = min(matint)
    for i in range(n):
        inaux = init+(c*i)
        for j in range(n):
            mat.append(inaux+(d*j))
    
    matint.sort()
    mat.sort()
    
    if mat == matint:
        print("yes")
    else:
        print("no")