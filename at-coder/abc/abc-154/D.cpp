#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> p(N, 0);
	vector<double> expect(210000, 0.0), list(210000, 0.0);
	double result = 0.0;

	repeat(i, N) {
		cin >> p[i];
		expect[i] = (double)(1 + p[i]) / 2.0;
	}

	list[0] = 0;
	for(int i = 1; i <= N; i++) {
		list[i] = list[i-1] + expect[i-1];
	}
  for(int i = K; i <= N; i++) {
		result = max(result, list[i] - list[i - K]);
	};

	cout << fixed << setprecision(10) << result << endl;
	return 0;
}
