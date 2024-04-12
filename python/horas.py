g = [0,1,2,5,8]

for _ in range(int(input())):
    h, m = map(int, input().split())
    H, M = map(str, input().split(':'))

    M = [int(M[0]), int(M[1])]
    H = [int(H[0]), int(H[1])]

    for i in range(2):
        for j in g:
            if M[i] not in g and M[i] <= j and i == 0:
                M[i] = j
                M[i+1] = 0
            elif 
        if M[i] == 9:
            M[i] = 0

    for i in range(2):
        for j in g:
            if H[i] not in g and H[i] <= j:
                H[i] = j
        if H[i] == 9:
            H[i] = 0

    
    print(H,M)
    if M[1]*10 + M[0] > h or H[1]*10 + H[0] > m:
        print("00:00")
    else:
        if len(str(H[0]*10 + H[1])) == 1 and len(str(M[0]*10 + M[1])) == 1:
            print(f"0{H[0]*10 + H[1]}:0{M[0]*10 + M[1]}")
        elif len(str(H[0]*10 + H[1])) == 1:
            print(f"0{H[0]*10 + H[1]}:{M[0]*10 + M[1]}")
        elif len(str(M[0]*10 + M[1])) == 1:
            print(f"{H[0]*10 + H[1]}:0{M[0]*10 + M[1]}")
        else:
            print(f"{H[0]*10 + H[1]}:{M[0]*10 + M[1]}")
