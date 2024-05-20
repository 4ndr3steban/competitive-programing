n= int(input())
s=input()
ans=['(']
for i in range(n-1):
    if s[i] == ')' and s[i+1] == '(':
        ans.append('*(')

    elif s[i] == '(' and s[i+1] == ')':
        ans.append('1)')

    elif s[i] == ')' and s[i+1] == ')':
        ans.append('+1)')

    else:
        ans.append(s[i])
   

print(eval(''.join(ans)))