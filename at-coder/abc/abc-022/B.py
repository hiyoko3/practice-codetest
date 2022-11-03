N  =int(input())
A = [list(map(int,input().split()))for i in range(N)]
count=int(0)

l = [0] * 100000 # 100000 個の配列を作成（0で初期化つき）

for i in range(N): # 花の重複数をカウントする
	a = int(A[i][0])
	l[a-1] += 1 # 配列は 0 ~ N -1 までなので a-1

for i in range(100000): # 結果処理
	n = int(l[i])
	if n > 1: count += n - 1

# Ai : 1 2 1 4 2 3 1 6 7
# 重複数 1 : 3, 2: 2, other : 1
# l[i] ==  1の時
# 1(a1) 1(a2) 1(a3) の時受粉するパターン : 2
# a3 -> a2 または a3 ->  a1
# a2 -> a1
# a1 は i > j を満たさないので存在しない
# みたいな形になるので n-1 個

print(count)
