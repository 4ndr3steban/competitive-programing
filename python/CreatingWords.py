for _ in range(int(input())):
    a, b = input().split()

    print(b[0:1]+a[1::], a[0:1]+b[1::])