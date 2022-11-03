#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	int N, K;
	cin >> N >> K;
	double result = 0.0;

	repeat(i, N) {
		int coin = 1;
		int n = i+1;
		if (n < K) {
			for(int j = 1; j <= K; j++) {
				coin = coin << 1;
				if ((n * coin) >= K) break;
			}
		}
		// printf("result: %10f, coin: %d, N: %d, max: %f\n", 1/(double)N * 1/(double)coin, coin, i+1, max);
		result += 1/(double)N * 1/(double)coin;
	}
	cout << fixed << setprecision(10) << result << endl;
	return 0;
}
