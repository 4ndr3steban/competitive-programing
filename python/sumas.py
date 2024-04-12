for _ in range(int(input())):
    n = int(input())

    dic = {}
    ans = 0

    for i in range(1,n+1):

        div = i//10
        res = i%10

        if div in dic.keys():
            ans += dic[div] + res
        else:
            dic[div] = div
            ans += dic[div] + res
        dic[i] = dic[div + res]

    print(ans)

