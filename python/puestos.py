def merge(l1,l2):

    result = []

    i, j = 0, 0

    while i < len(l1) and j < len(l2):

        if l1[i][0] > l2[j][0] or (l1[i][0] == l2[j][0] and l1[i][1] < l2[j][1]):
            result.append(l1[i])
            i += 1
        else:
            result.append(l2[j])
            j += 1

    if i == len(l1):
        for k in range(j, len(l2)): result.append(l2[k])
    
    if j == len(l2):
        for k in range(i, len(l1)): result.append(l1[k])

    return result

def merge_sort(lst):

    if len(lst) < 2:
        return lst
    
    else:
        mid = len(lst) // 2

        low = merge_sort(lst[:mid])
        high = merge_sort(lst[mid:])
        return merge(low, high)


casos = list(map(int, input().split()))

teams = []
for i in range(casos[0]):
    teams.append(list(map(int, input().split())))


teams1 = merge_sort(teams)

select = teams1[casos[1] - 1]

print(teams1.count(select))