#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

P getAB(int n) {
	// n の先頭文字
	int a = n % 10;
	// n の末尾文字
	int b = 0;
	while (n) {
		b = n;
		n /= 10;
	}
	return P(a, b);
}

int main() {
	int N;
	ll result = 0;
	map<P, int> pairs;
	cin >> N;


	for(int i = 1; i <= N; i++) {
		P p = getAB(i);
		// 出現pairをカウント
		pairs[p] += 1;
	}

	// 組み合わせ数の計算
	for(int i = 1; i<= N; i++) {
		P p = getAB(i);
		P q(p.second, p.first);
		result += pairs[q];
	}

	cout << result << endl;
	return 0;
}