for _ in range(int(input())):
    s = input()
    l = set(s)

    if len(l) == 1:
        print("NO")
    else:
        print("YES")

        for i in range(1,len(s)):
            if s[i] != s[i-1]:
                print(s[i:]+s[0:i])
                break
