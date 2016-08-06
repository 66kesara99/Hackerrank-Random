def pal(n):
    n = str(n)
    p=[0,0,0]

    for i in range(3):
        if n[i]==n[5-i]:
            p[i]=1
        
    if p==[1,1,1]:
        r=1

    else:
        r=0
    return r
    

t = int(input())

for j in range(t):
    n = int(input())
    p=0
    numb=0

    l=[]
    for i in range(100,999):
        for j in range(100,999):
            p=i*j
            if len(str(p))==6:
                if pal(p)==1:
                    if p<n:
                        l.append(p)

    print(max(l))



    
