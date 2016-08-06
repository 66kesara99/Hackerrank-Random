t = int(input())
trinum = []
div = []
trinum.append(1)
div.append(1)
k = 2

for j in range(t):
    n = int(input())
    c = 0

    for i in range(len(div)):
        if div[i]>n:
            ans = trinum[i]
            c = 1
            break
        
    if c == 0:
        while c == 0:
            tri = ((k)*(2+(k-1)))//2
            trinum.append(tri)
            l = 1
            count = 0
            while l<((tri)//2)+1:
                if tri%l==0:
                    count = count+1

                l = l+1

            count = count+1
            div.append(count)
            k = k+1

            if count>n:
                ans = tri
                c = 1
    print(ans)
        
