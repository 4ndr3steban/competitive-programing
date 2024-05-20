for _ in range(int(input())):
    s = input()

    flag = False
    part = 0

    for i in range(len(s)-1):
        if (s[i] != s[i+1]) and s[i] == '0' and flag == False:
            flag = True
        else:
            if(s[i] != s[i+1]):
                part += 1

    print(part+1)