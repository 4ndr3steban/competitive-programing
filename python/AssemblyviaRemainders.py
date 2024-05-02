for _ in range(int(input())):
    n = int(input())

    v = list(map(int, input().split()))

    ans = [v[0]+1]

    aux = 2
    while len(ans) < n:

        for i in range(0, n-1):
            if (ans[i] + v[i] < ans[i] * 2):
                ans.append(ans[i] + v[i])
            else:
                ans = [(v[0]+1)*aux]
                aux += 1
                continue
        
    print(*ans)