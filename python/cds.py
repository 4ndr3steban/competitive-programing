for _ in range(int(input())):

    string = input()

    a = 0
    b = 0
    for i in string:
        if i == "A": a+= 1
        else: b+= 1

    if a > b:
        print("A")
    else:
        print("B")