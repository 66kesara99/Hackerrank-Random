n = int(input())
names = []

for j in range(n):
    name = input()
    names.append(name)

names.sort()
q = int(input())

for j in range(q):
    n = input()
    tot = 0

    for i in range(len(n)):
        a = ord(n[i])-64
        tot = tot+a

    x = names.index(n)+1
    tot = tot*x

    print(tot)
    
        
