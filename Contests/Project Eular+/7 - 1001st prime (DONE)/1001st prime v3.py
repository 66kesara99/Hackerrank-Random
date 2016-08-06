t = int(input())
l = []
m = []
q = []
o = []
p = []
c = 0
x = 1
d = 1999
y = 17388
e = 3999
z = 37812
f = 5999
a = 59358
g = 7999
b = 81774

for i in range(t):
    n = int(input())

    if n<2000:

        while c<n:
            x = x+1
            for i in range(2,x):
                if x%i==0:
                    break
            else:
                l.append(x)
                c = c+1
        print(l[n-1])
        

    elif n<4000:
        
        while d<n:
            y = y+1
            for i in range(2,y):
                if y%i==0:
                    break
            else:
                m.append(y)
                d = d+1
        print(m[n-2000])

    elif n<6000:
        
        while e<n:
            z = z+1
            for i in range(2,z):
                if z%i==0:
                    break
            else:
                q.append(z)
                e = e+1
        print(q[n-4000])

    elif n<8000:
        
        while f<n:
            a = a+1
            for i in range(2,a):
                if a%i==0:
                    break
            else:
                o.append(a)
                f = f+1
        print(o[n-6000])

    elif n<10001:
        
        while g<n:
            b = b+1
            for i in range(2,b):
                if b%i==0:
                    break
            else:
                p.append(b)
                g = g+1
        print(p[n-8000])


        

