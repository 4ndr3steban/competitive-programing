from collections import deque

class Solution:
    def addTwoNumbers(self, l1: list, l2: list) -> list:

        if len(l1) > len(l2):
            l2 += [0] * (len(l1) - len(l2))
        else:
            l1 += [0] * (len(l2) - len(l1))

        ans = deque()
        carry = 0
        for i in range(min(len(l1), len(l2))):
            add = l1[i] + l2[i]
            add += carry
            if add >= 10:
                ans.append(int(str(add)[1]))
                carry = int(str(add)[0])
            else:
                ans.append(add)
                carry = 0
        if carry > 0:
            ans.append(carry)

        return list(ans)
    
print(Solution().addTwoNumbers([2,4,3], l2 = [5,6,4]))
