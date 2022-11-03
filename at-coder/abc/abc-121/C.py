import sys

N,M = map(int,input().split())
s = {}
ans = 0

for i in range(N):
	a,b = map(int,input().split())
	if a in s.keys():
		s[a] += b
	else:
		s[a] = b

s = sorted(s.items(), key=lambda x:x[0])
for store in s:
	price = store[0]
	stock = store[1]
	if M == 0: break

	if M - stock >= 0:
		M -= stock
		ans += (stock * price)
	else:
		for i in range(stock):
			M -= 1
			ans += price
			if M == 0:
				print(ans)
				sys.exit()
print(ans)
