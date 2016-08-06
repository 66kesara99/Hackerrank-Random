t=int(input())

for j in range(t):
    a= int(input())

    sum=0
    i=0

    while i<a:
        if i%3==0 or i%5==0:
            sum=sum+i
        i=i+1

    print(sum)
