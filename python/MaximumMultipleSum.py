for _ in range(int(input())):

    n = int(input())

    ans = 0
    res = 0

    for i in range(2,n+1,1):
        aux = 0
        for j in range(i,n+1,i):
            aux += j

        if aux >= ans:
            ans = aux
            res = i
    
    print(res)