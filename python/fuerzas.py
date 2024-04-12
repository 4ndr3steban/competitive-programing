vects = int(input())

x=0
y=0
z=0

for _ in range(vects):
    matrz = list(map(int, input().split()))

    x += matrz[0]
    y += matrz[1]
    z += matrz[2]


if x == y == z == 0:
    print("YES")
else:
    print("NO")

 