arr = input().split()
K = int(arr[0])
A = int(arr[1])
B = int(arr[2])

n = 1 + K
x = 1
if K > A:
	x = B
	K -= A+1

	temp = int(K / 2)

	x += temp * (B-A)
	K -= temp * 2

	while K > 0:
		K -= 1
		x += 1

print(max(x, n))
