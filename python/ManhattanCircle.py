for _ in range(int(input())):

    n, m = map(int, input().split())

    grid = []

    for _ in range(n):
        grid.append(input())

    x = -1
    y = -1

    count_max = 0
    for i in range(n):
        count = 0
        for j in range(m):
            if grid[i][j] == "#":
                count += 1
                if y == -1:
                    y = j + 1
        
        if count > count_max:
            count_max = count
            x = i + 1
    print(x, y)