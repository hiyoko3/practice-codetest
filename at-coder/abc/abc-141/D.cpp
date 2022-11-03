#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int N = 1, M = 1;
	ll result = 0;
	cin >> N >> M;
	priority_queue<ll> q;

	repeat(i, N) {
		ll a = 0;
		cin >> a;
		q.push(a);
	}

	repeat(i, M) {
		ll v = q.top();
		q.pop();
		q.push(v/2);
	}

	repeat(i, N) {
		result += q.top();
		q.pop();
	}

	cout << result << endl;
	return 0;
}
