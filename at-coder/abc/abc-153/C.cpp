#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {
	ll result = 0;

	ll N = 1, K = 0;
	cin >> N >> K;

	vector<ll> H(max(N, K), 0);
	for(ll i = 0; i < N; i++) {
		cin >> H[i];
		result += H[i];
	}

	sort(H.begin(), H.end(), greater<ll>());
	for(ll i = 0; i < K; i++) {
		result -= H[i];
	}

 	cout << result << endl;
	return 0;
}
