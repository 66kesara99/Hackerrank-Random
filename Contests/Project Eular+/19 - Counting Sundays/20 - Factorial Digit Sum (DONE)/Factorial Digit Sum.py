import math
t = int(input())

for j in range(t):
    n = int(input())
    total = 0

    c = math.factorial(n)
    c = str(c)

    for i in range(len(c)):
        total = total + int(c[i])

    print(total)
