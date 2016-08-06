t = int(input())

for j in range(t):
    n = int(input())
    mult = 2

    for i in range(1,n):
        mult = mult*2

    mult = str(mult)
    l = []

    for i in range(len(mult)):
        l.append(mult[i])

    l = list(map(int,l))
    print(sum(l))

    
