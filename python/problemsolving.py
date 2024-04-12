for _ in range(int(input())):
    n = int(input())
    prbs = input()

    lts = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    dic = {lts[i]:i+1  for i in range(len(lts))}

    contadas = []
    ans = 0
    for j in prbs:
        cnt = prbs.count(j)
        if cnt >= dic[j] and j not in contadas:
            ans += 1
            contadas.append(j)

    print(ans)