#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	int N;
	cin >> N;
	vector<ll> h(N, 0);
	repeat(i, N) {
		cin >> h[i];
	}

	string result = "Yes";

	ll prev = h[0];
	for(int i = 1; i < N; i++) {
		ll n = h[i];
		if (prev <= (n-1)) {
			prev = n - 1;
			continue;
		} else if (prev <= n) {
			prev = n;
			continue;
		}

		result = "No";
		break;
	}

	cout << result << endl;
	return 0;
}
