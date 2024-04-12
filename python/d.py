def check_jump(mid, seg):

    l, r = 0, 0

    for i in seg:
        l = max(l - mid, i[0])
        r = min(r + mid, i[1])

        if l > r:
            return False
    return True


for _ in range(int(input())):
    segmts = int(input())

    seg = [list(map(int, input().split())) for _ in range(segmts)]


    l, r = -1, 10 ** 9

    while r - l > 1:

        mid = (r + l) // 2
        if check_jump(mid, seg):
            r = mid
        else:
            l = mid

    print(r)
        
