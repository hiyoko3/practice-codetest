#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> p;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<ll> A(max(N, M), 0);
	priority_queue<p> Q;
	ll result = 0;

	repeat(i, N) {
		ll a;
		cin >> a;
		Q.push( make_pair(a, 1) );
	}

	repeat(i, M) {
		ll b , c;
		cin >> b >> c;
		Q.push( make_pair(c, b) );
	}

	repeat(i, N) {
		p _p = Q.top();
		Q.pop();
		result += _p.first;
		if (_p.second > 1) {
			_p.second--;
			Q.push(_p);
		}
	}

	cout << result << endl;
	return 0;
}
