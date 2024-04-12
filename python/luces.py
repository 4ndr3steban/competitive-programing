matriz = [list(map(int, input().split())) for i in range(3)]

inic = [[1, 1, 1] for _ in range(3)]

dx = [1, -1, 0, 0]
dy = [0, 0, -1, 1]

def ok(x, dx, y, dy):
    if x+dx < 0 or y+dy < 0 or x+dx > 2 or y+dy > 2:
        return False
    else:
        return True
    

for row in range(3):
    for column in range(3):
        reps = matriz[row][column]
        luz = inic[row][column]
        if reps % 2 != 0:
            if luz == 0:
                inic[row][column] = 1
            else:
                inic[row][column] = 0

            for idx in range(len(dx)):
                if ok(row, dx[idx], column, dy[idx]):
                    if inic[row+dx[idx]][column+dy[idx]] == 0:
                        inic[row+dx[idx]][column+dy[idx]] = 1
                    else:
                        inic[row+dx[idx]][column+dy[idx]] = 0

for row in inic:
    print(*row, sep="")