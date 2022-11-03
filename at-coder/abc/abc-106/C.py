import sys
A = str(input())
B = int(input())
count = 0

for i in range(len(A)):
    if A[i] == "1":
        count += 1
    else:
        if B <= count:
            print(1)
            sys.exit()
        else:
            print(A[i])
            sys.exit()
print(1)
