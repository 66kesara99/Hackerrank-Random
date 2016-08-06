t = int(input())

for j in range(t):
    n = int(input())
    l = []
    m = 1

    # find the prime numbers
    for i in range(2,n+1):
        for k in range(2,i):
            if i%k == 0:
                break
        else:
            l.append(i)
            
    # find the remaining multiplys         
    for i in range(2,n+1):
        a = i
        for k in range(len(l)):
            if a/l[k]==a//l[k]: # if devision is integer
                a = a//l[k]
                
        if a!=1: # remaining multiply
             l.append(a)

    for i in range(len(l)):
        m = m*l[i]

    print(m)
