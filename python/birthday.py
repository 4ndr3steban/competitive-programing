n = int(input())

ice = list(map(int, input().split()))
ice.sort()
ans = (n-1) // 2
 
for i in range(0,n-1,2):
    ice[i], ice[i+1] = ice[i+1], ice[i]
    
 
print(ans)
print(*ice)



