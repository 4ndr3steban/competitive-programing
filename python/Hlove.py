inp = list(map(int, input().split()))

mths = inp[0]

f1 = list(map(int, input().split()))

f2 = list(map(int, input().split()))


years = 0
if f2[2]-f1[2] >= 2:
    years += sum(inp[1::] * (f2[2]-f1[2]-1))

months = 0
if f2[1]-f1[1] >= 2:
    months += sum(inp[f2[1]+1:f1[1]])

days = 0
if f2[0]-f1[0] < 0:
    days = inp[f2[1]] - f1[0] + f2[0]


print(years+months+days)