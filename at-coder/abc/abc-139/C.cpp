#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	vector<ll> H(N, 0);
	ll result = 0;

	repeat(i, N) {
		cin >> H[i];
	}

	int count = 0;
	for(int i = 1;i < N; i++) {
		if (H[i-1] >= H[i]) {
			count++;
			if (count > result) result = count;
			continue;
		}
		count = 0;
	}

	cout << result << endl;
	return 0;
}
