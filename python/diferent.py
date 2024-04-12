for _ in range(int(input())):
    n, m = map(int, input().split())

    m1 = list(map(int, input().split()))
    m2 = list(map(int, input().split()))

    sum_m1 = sum(m1)

    m2.sort()

    diff = max(abs(sum(m2[0::n])-sum_m1), abs(sum(m2[-n:])-sum_m1))

    print(diff)
    