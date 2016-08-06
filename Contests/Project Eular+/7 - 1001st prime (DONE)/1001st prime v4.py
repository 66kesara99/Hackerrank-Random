t = int(input())
l = [0 for i in range(10001)]
l[0]=2
l[1]=3


for j in range(t):
    n = int(input())

    if l[n-1] !=0:
        print(l[n-1])
        
    else:
        #find the last known prime
        for i in range(len(l)):
            if l[i]==0:
                lcount = i
                counter = l[i-1]
                break

        
        #fint primes until n and save them
        while l[n-1]==0:
            counter = counter+1
            if counter%2 !=0 and counter%3 != 0:
                temp = 4
                while temp*temp <= counter:
                    if counter%temp == 0:
                        break
                    temp = temp+1

                if temp*temp>counter:
                    l[lcount] = counter
                    lcount = lcount+1


        print(l[n-1])
