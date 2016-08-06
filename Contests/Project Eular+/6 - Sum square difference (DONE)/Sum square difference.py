t = int(input())

for j in range(t):
    n = int(input())
    x = n*(1+n)//2 # sum of normal series
    y = n*(n+1)*(2*n+1)//6 # sum of square series

    f = x*x - y

    print(f)
