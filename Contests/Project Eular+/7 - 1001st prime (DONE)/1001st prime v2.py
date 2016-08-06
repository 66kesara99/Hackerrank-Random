t = int(input())
l = []
c = 0
x = 1

for j in range(t):
    n = int(input())

    while c<n:
        x = x+1
        for i in range(2,x):
            if x%i==0:
                break
        else:
            l.append(x)
            c = c+1
    print(l[n-1])
        

