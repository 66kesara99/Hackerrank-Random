t = int(input())
array = []
for i in range (1,65):
    array.append(2**i - 1)

for i in range (0,t):
    n = int(input())
    i = 0;
    while (n>array[i]):
        i = i+1

    if (n == 1):
        print(1)
    else:
        print(2*(n-array[i-1])-1)
