# def check_jump(mid, seg):

#     l, r = 0, 0

#     for i in seg:
#         l = max(l - mid, i[0])
#         r = min(r + mid, i[1])

#         if l > r:
#             return False
#     return True


# for _ in range(int(input())):
#     segmts = int(input())

#     seg = [list(map(int, input().split())) for _ in range(segmts)]


#     for j in range(0, (10 ** 9) + 1):
#         if check_jump(j, seg):
#             print(j)
#             break
        
print(5%4)