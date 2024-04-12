bins = [10, 11, 101, 111, 1011, 1101, 10001, 10011, 10101, 10111, 11001, 11101, 11111]

t = int(input())

for _ in range(t):
    n = int(input())
    init = n
    for i in bins[::-1]:
        while (n%i) == 0:
            n = n/i

    if n == 1:
        print("YES")
    else:
        init = str(init)
        flag = True

        for i in init:
            if i == "0" or i == "1":
                continue
            else:
                flag = False
                break
        
        if flag:
            print("YES")
        else:
            print("NO")
