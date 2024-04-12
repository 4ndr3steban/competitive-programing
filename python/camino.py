from collections import deque

for _ in range(int(input())):

    numevents = int(input())
    events = list(map(int, input().split()))

    pos1 = deque()
    pos2 = deque()

    pos1.append(1)
    pos2.append(1)

    band_pos1 = False
    band_pos2 = False

    for i in events:
        if i == 0:
            if len(pos1) > 1:
                first1 = pos1.popleft()
                pos1[0] += first1
            else:
                band_pos1 = True

            pos2.append(1)

        elif i == 1:
            pos1.append(1)
            pos2.append(1)

        elif i == -1:
            if len(pos1) > 1:
                first1 = pos1.popleft()
                pos1[0] += first1
            else:
                band_pos1 = True

            if len(pos2) > 1:
                first2 = pos2.popleft()
                pos2[0] += first2
            else:
                band_pos2 = True

        print(pos1)
        print(pos2)

