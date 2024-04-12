for _ in range(int(input())):
    n = int(input())

    c1 = input()
    c2 = input()

    cs, cf = 0, 0

    for i in range(n):
        if c1[i] == "0" and c2[i] == "1":
            cs += 1
        elif c1[i] == "1" and c2[i] == "0":
            cf += 1

    print(max(cs, cf))
