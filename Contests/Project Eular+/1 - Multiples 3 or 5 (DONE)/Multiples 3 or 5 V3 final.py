t = int(input())

for j in range(t):
    a= int(input())

    x=(a-1)//3
    y=(a-1)//5
    z=(a-1)//15

    m= ((x)*(2*3+(x-1)*3))//2
    n= ((y)*(2*5+(y-1)*5))//2
    o= ((z)*(2*15+(z-1)*15))//2
    
    s=(m+n-o)

    print(s)
