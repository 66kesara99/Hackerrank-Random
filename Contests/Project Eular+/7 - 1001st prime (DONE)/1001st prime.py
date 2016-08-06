t = int(input())
l = []
l.append(2)

for j in range(t):
    n = int(input())

    for i in range(max(l)+1,n*n):
        for k in range(2,i):
            if i%k == 0:
                break
        else:
            l.append(i)
    
    print(l[n-1])
