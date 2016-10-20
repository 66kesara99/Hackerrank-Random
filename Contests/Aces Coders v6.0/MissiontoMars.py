import math

n = input().split()
n = [ float(x) for x in n ]
coord = [[0 for x in range(3)] for y in range(len(n))]
for i in range(len(n)):
    a = input().split()
    coord[i][0] = float(a[0])
    coord[i][1] = float(a[1])
    coord[i][2] = float(a[2])

direct =[[0 for x in range(3)] for y in range(len(n))]

totx = 0
toty = 0
totz = 0
for i in range(len(n)):
    f = 6.674*n[i]*106000/math.pow(coord[i][0],2)
    totx = totx + f*math.sin(coord[i][1])*math.cos(coord[i][2])
    toty = toty + f*math.sin(coord[i][1])*math.sin(coord[i][2])
    totz = totz + f*math.cos(coord[i][1])


force = math.sqrt(math.pow(totx,2)+math.pow(toty,2)+math.pow(totz,2))
print(force)
