t = int(input())

for j in range(t):
    n = int(input())
    i=2
    fac = []

    while i*i<=n: #factor are always less than sqrt
        while n%i == 0:
            n = n//i
            fac.append(i)
        i = i+1

    if n>1:
        fac.append(n) #considering prime numbers or prime leftovers
    print(max(fac))
