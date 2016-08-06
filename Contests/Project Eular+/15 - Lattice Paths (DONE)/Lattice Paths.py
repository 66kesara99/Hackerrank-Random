import math

t = int(input())

for j in range(t):
    n,m = input().split()
    n,m = int(n),int(m)

    c = (math.factorial(n+m)//math.factorial(n))//math.factorial(m)
    x = c%1000000007
    print(x)
