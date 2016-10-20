n = int(input())

tasks = []
depend = []
for i in range(n):
    a = input().split()
    tasks.append(a[0])
    if (len(a)>1):
        depend.append(a[1])
    else:
        depend.append(0)

print(tasks)
print(depend)
