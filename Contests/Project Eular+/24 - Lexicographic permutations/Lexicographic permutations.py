import itertools
p = itertools.permutations('defghijklm')

a = []

for i in p:
    s = ''
    m = s.join(i)
    a.append(m)

t = int(input())

for i in range(t):
    n = int(input())
    print('abc'+a[n-1])
