from math import factorial

for _ in range(int(input())):
    tam = int(input())
    lst = list(map(int, input().split()))

    castset = set(lst)
    cont = 1
    for i in castset:
        cant = lst.count(i)
        cont *= factorial(cant)

    print(cont)
