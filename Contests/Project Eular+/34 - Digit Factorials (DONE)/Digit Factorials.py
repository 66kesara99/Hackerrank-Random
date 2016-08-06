import math

n = int(input())
j = 10
final = 0

while int(j)<=n:
    j = str(j)
    tot = 0

    for i in range(len(j)):
        tot = tot + math.factorial(int(j[i]))

    if tot%int(j) == 0:
        final = final+int(j)
        

    j = int(j)+1

print(final)
