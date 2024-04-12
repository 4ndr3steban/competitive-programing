from collections import deque

for _ in range(int(input())):
    n = int(input())

    dics = []

    for _ in range(3):
        dics.append(list(map(int, input().split())))

    maxs = []

    for i in range(len(dics)):
        m = sorted(dics[i])[-3::]
        for j in m:
            maxs.append((j, dics[i].index(j), i))
    
    order_maxs = sorted(maxs, key=lambda x: x[0], reverse=True)
    
    ans = 0
    idxs = []
    idxs2 = []
    cnt = 0
    for i in order_maxs:
        if cnt == 3:
            break
        print(idxs, idxs2)
        if i[1] not in idxs and i[2] not in idxs2:
            idxs.append(i[1])
            idxs2.append(i[2])
            ans += i[0]
            cnt += 1
    print(order_maxs)
    print(ans)
    
        