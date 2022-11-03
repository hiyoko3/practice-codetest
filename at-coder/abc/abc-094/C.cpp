#include <bits/stdc++.h>
// increment
#define rep_n(_1, _2, _3, NAME, ...) NAME
#define rep_2(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep_3(i, initial, n) for (int i = (int)(initial); i < (int)(n); ++i)
#define repeat(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME, ...) NAME
#define rep_r_2(i, n) for (int i = (int)(n); i > 0; i--)
#define rep_r_3(i, initial, n) for (int i = (int)(initial); i > (int)(n); i--)
#define repeat_r(...) rep_r_n(__VA_ARGS__, rep_r_3, rep_r_2)(__VA_ARGS__)
// define variable
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
	int N = 0;
	cin >> N;

	vector<ll> l(N, 0), s_l(N, 0);

	repeat(i, N) {
		ll x = 0;
		cin >> x;
		l[i] = x;
		s_l[i] = x;
	}

	sort(s_l.begin(), s_l.end());

	int mid = N/2;
	ll val_1 = s_l[mid], val_2 = s_l[mid-1];
	map<ll, ll> ans;

	repeat(i, N) {
		ans[ s_l[i] ] = (i < mid) ? val_1 : val_2;
	}

	repeat(i, N) {
		cout << ans[ l[i] ] << endl;
	}

	return 0;
}
