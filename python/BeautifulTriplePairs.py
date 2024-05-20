for _ in range(int(input())):
    n = int(input())

    elems = list(map(int, input().split()))

    ans = 0

    for i in range(n-3):
        for j in range(i+1, n-2, 1):
            if elems[i] != elems[j] and elems[i+1] == elems[j+1] and elems[i+2] == elems[j+2]:
                ans +=1
            elif elems[i] == elems[j] and elems[i+1] != elems[j+1] and elems[i+2] == elems[j+2]:
                ans +=1
            elif elems[i] == elems[j] and elems[i+1] == elems[j+1] and elems[i+2] != elems[j+2]:
                ans +=1

    print(ans)