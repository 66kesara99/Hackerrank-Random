n,k = input().split()
n,k = int(n),int(k)
j = 1

while j<n:
    j = j+1
    l = []
    i = 1
    no = 0
    while len(l)<k:
        c = j*i
        c = str(c)
        i = i+1

        for h in range(len(c)):
            l.append(c[h])

    l = list(map(int,l))
    
    for i in range(1,k+1):
        if l.count(i)>1:
            no = 1
            break
        elif l.count(i)<1:
            no = 1
            break
        elif len(l)>k:
            no = 1
            break
        
    if no == 0:
        print(j)
