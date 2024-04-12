for _ in range(int(input())):
    pos = input()
    letras = ["a", "b", "c", "d", "e", "f", "g", "h"]

    for i in range(1,9):
        if int(pos[1]) != i:
            print(pos[0]+f"{i}")

    for j in letras:
        if pos[0] != j:
            print(f"{j}"+pos[1])