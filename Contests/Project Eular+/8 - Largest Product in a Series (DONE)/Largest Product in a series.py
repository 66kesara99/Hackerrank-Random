t = int(input())

for j in range(t):
    n,k = input().split()
    n,k = int(n),int(k)
    arr = input()
    l = []
    mult = 0

    #append the digits in a list
    for i in range(n):
        l.append(arr[i])
    l = list(map(int,l))

    #multiply k numbers
    for i in range(n-k+1):
        temp = 1
        for m in range(i,i+k):
            temp = temp*l[m]

        if mult<temp:
            mult = temp

    print(mult)
