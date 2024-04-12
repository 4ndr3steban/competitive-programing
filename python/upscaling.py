t = int(input())

for _ in range(t):

    n = int(input())

    for j in range(n):
        if j % 2 == 0:

            ans = []

            for i in range(n):
                if i % 2 == 0:
                    ans.append("##")
                else:
                    ans.append("..")
            for x in ans:
                print(x, end = "")
            print() 
            for x in ans:
                print(x, end = "")    
            print()

        else:
            ans = []
            for i in range(n):
                if i % 2 == 0:
                    ans.append("..")
                else:
                    ans.append("##")
            for x in ans:
                print(x, end = "")
            print() 
            for x in ans:
                print(x, end = "")
            print() 

    