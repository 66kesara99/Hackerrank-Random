t = int(input())
l = []
l.append(2)
l.append(3)
l.append(0)


for j in range(t):
    n = int(input())

    i = 0
    total = 0
    while l[i]<=n:
        total = total+l[i]
        i = i+1
        if l[i]==0:
            counter = l[i-1]
            check = 0
        
            while check == 0:
                counter = counter+1
                if counter%2 !=0 and counter%3 != 0:
                    temp = 4
                    while temp*temp <= counter:
                        if counter%temp == 0:
                            break
                        temp = temp+1

                    if temp*temp>counter:
                        l[i] = counter
                        l.append(0)
                        check = 1

    

    print(total)
