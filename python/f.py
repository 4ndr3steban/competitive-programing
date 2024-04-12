for _ in range(int(input())):
    n = int(input())
    
    pars = []

    for _ in range(n):

        pars.append(tuple(map(int, input().split())))

    pars.sort(key = lambda x: x[1] , reverse= True)

    meets = 0

    for conj in range(n-1):
        left_c = pars[conj][0]
        for subc in range(conj+1, n):
            if left_c < pars[subc][0]:
                meets += 1
    
    print(meets)