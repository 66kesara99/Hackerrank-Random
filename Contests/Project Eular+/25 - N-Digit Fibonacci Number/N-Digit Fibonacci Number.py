t = int(input())
l = []
l.append('1')
l.append('1')
l.append('0')

for j in range(t):
    n = int(input())


    i = 1

    while len(l[i-1])<n:
        if int(l[i])==0:
            l[i] = str(int(l[i-2])+int(l[i-1]))
            l.append('0')

        i = i+1

    print(i)

    
