t = int(input())

for j in range(t):
    n = int(input())

    l = []
    l.append(2)
    l.append(3)

    counter = 3    
    #find primes until n and save them
    while counter<n:
        counter = counter+1
        if counter%2 !=0 and counter%3 != 0:
            temp = 4
            while temp*temp <= counter:
                if counter%temp == 0:
                    break
                temp = temp+1

            if temp*temp>counter:
                l.append(counter)
                
                


    print(sum(l))
