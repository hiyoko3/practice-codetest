import math
N = int(input())
A = list(map(int,input().split()))

four = 0
two = 0

for i in range(len(A)):
  if A[i]%4 == 0:
    four += 1
  if A[i]%2 == 0:
    two += 1
n = math.floor(N/2)
two -= four
x = (n - four) * 2

# print(four, two, n, x)
if four >= n:
  print("Yes")
elif two >= x:
  print("Yes")
else:
  print("No")
