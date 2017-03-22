import math

m = 1000000007

n, k = input().split()
n, k = int(n), int(k)

if (k % 2 == 1):
	k = k-1

ans = math.factorial(n)/(math.factorial(n-k) * math.factorial(k))

print(int(ans) % m)
