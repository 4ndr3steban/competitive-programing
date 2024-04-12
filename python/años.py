def binary_search(lista, x):

    low = 0
    high = len(lista) - 1

    while low <= high:

        pm = low + (high - low) // 2

        if lista[pm] == x:
            return pm
        elif lista[pm] > x:
            high = pm - 1 
        else: 
            low = pm + 1

    return -1

for _ in range(int(input())):
    ini = int(input())
    no_anos = list(map(int, input().split()[1:]))
    fin = int(input())

    anos = [i for i in range(ini,fin+1)]
    cont = len(anos)

    for ano in no_anos:
        x = binary_search(anos, ano)
        if x != -1:
            cont -= 1

    print(cont)