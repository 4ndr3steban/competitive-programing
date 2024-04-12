from math import ceil

for _ in range(int(input())):
    leng = int(input()) 
    cadena = input()

    dct = {}
    for i in cadena:
        if i not in dct:
            dct[i] = 1
        else:
            dct[i] = dct[i] + 1

    if max(dct.values()) <= ceil(leng/2) and leng % 2 != 0:
        print(1)
    elif max(dct.values()) > ceil(leng/2) and leng % 2 != 0:
        print(((max(dct.values()) - ceil(leng/2)) * 2) + 1)
    
    elif max(dct.values()) <= leng/2 and leng % 2 == 0:
        print(0)
    elif max(dct.values()) > leng/2 and leng % 2 == 0:
        print(((max(dct.values()) - ceil(leng/2)) * 2))

