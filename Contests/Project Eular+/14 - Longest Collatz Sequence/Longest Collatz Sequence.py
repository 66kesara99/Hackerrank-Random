t = int(input())
numlist = []
chnlist = []

for j in range(t):
    n = int(input())
    nlist = []
    anslist = []
    no = 0
    counter = 0

    if numlist.count(n) == 1:
        no = 1

    if no == 0:    
        while n != 1:
            if n%2 == 0:
                n = n//2
            else:
                n = 3*n + 1
                
            if numlist.count(n) == 1:
                x = numlist.index(n)
                y = chnlist[x]
                counter = counter + y
                break

            else:
                counter = counter+1
                numlist.append(n)
                chnlist.insert(0,counter)

            

            
            
            
            
