#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	ll N, K;
	cin >> N >> K;
	ll result = 0;

	ll n = N;
	while (n > 0) {
		result++;
		n /= K;
	}

	cout << result << endl;
	return 0;
}
