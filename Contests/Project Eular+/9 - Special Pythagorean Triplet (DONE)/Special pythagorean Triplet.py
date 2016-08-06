t = int(input())

for j in range(t):
    n = int(input())
    l=[]
    x = -1

    #solve pythagorean eqn and a+b+c=n by a,n = constant
    for a in range(n//3):
        y = (2*a*a+n*n-2*n*a)%(2*(n-a))
        c = (2*a*a+n*n-2*n*a)//(2*(n-a))
        b = n-a-c

        if y == 0 and a<b and b<c:
            l.append(a*b*c)
            x=1
            

    if x == -1:
        print(-1)
    else:
        print(int(max(l)))

    
