for _ in range(int(input())):
    txt = input()

    codef = "codeforces"
    cont = 0

    for idx in range(len(codef)):
        if txt[idx] != codef[idx]:
            cont += 1

    print(cont)