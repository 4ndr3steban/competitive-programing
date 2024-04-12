for _ in range(int(input())):

    n, f, a, b = map(int, input().split()) # n = mensajes, f = carga inicial, a = carga/t, b = carga por apa/enc

    nums = list(map(int, input().split()))

    cont = 0
    t = 0

    for i in nums:
        cont += min((i - t) * a, b)
        #print(i, t, a)
        t = i
        

    if cont >= f:
        print("NO")
    else:
        print("YES")
