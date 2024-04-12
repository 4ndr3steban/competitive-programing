for _ in range(int(input())):
    string = input()

    bs = string.count("B")

    if len(string) % 2 != 0:
        print("NO")
    elif bs == len(string) / 2:
        print("YES")
    else:
        print("NO")