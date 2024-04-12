for _ in range(int(input())):
    n = int(input())

    matriz = []

    for i in range(n):
        matriz.append(input())


    flag = True
    init = []

    for i in range(len(matriz)):
        for j in range(len(matriz[i])):
            if matriz[i][j] == "1":
                init.append(j)
                break
            
    
    if len(set(init)) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")



