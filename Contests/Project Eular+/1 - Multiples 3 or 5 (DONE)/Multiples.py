n=int(input())

for j in range(n):
    a=int(input())
    b=[]
    y=0
    x=0

    while y+3<a:
        y=y+3
        b.append(y)

    while x+5<a:
        x=x+5
        b.append(x)

    b=set(b)
    b=list(b)
    z=0

    for i in range(len(b)):
        z=z+b[i]

    print(z)
