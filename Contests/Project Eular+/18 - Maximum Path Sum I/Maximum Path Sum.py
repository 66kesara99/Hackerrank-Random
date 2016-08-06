t = int(input())

for j in range(t):
    n = int(input())
    if n == 0:
        s = 0
    else:
        m = int(input())
        x = 0
        s = m

        for i in range(1,n):
            a = []
            m = input().split()
            m = list(map(int,m))
            a.append(m[x])
            a.append(m[x+1])
            s = s+max(a)
            x = m.index(max(a))

    print(s)
