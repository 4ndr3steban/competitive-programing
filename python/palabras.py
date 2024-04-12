def comparar_letras(pal,gen):
    flag = True
    for i in pal:
        if i not in gen:
            flag = False
            break

    return flag

palabs = int(input())

lst_pal = input().split()

gener = [lst_pal[0]]



for pal in lst_pal[1::]:
    control = 0
    for gen in gener:
        if control == -1:
            break

        idx_pal = 0
        idx_gen = 0

        val = False

        for i in range((len(gen)*2)-1):
            if idx_pal == len(gen):
                val = True
                break

            if gen[idx_gen] == pal[idx_pal]:
                idx_pal += 1
                
            if idx_gen < len(gen)-1:
                idx_gen += 1
            else:
                idx_gen = 0

        print(val, pal, gen)

        if not val:
            gener.append(pal)
            control = -1

print(gener)


"""pal = "word"

gen = "dwor"

idx_pal = 0
idx_gen = 0

val = False

for i in range((len(gen)*2)-1):
    if idx_pal == len(gen):
        val = True
        break

    if gen[idx_gen] == pal[idx_pal]:
        idx_pal += 1
    
    if idx_gen < len(gen)-1:
        idx_gen += 1
    else:
        idx_gen = 0


print(val)"""