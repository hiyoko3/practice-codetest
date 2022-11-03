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

int main() {
	ll H, W, result = 0;
	cin >> H >> W;

	ll h_mid = H / 2;
	if ((H%2) == 1) {
		ll w_mid = W / 2;
		if ((W%2) == 1) {
			result += h_mid * w_mid;
			result += (h_mid+1) * (w_mid+1);
		} else {
			result += h_mid * w_mid;
			result += (h_mid+1) * w_mid;
		}
	} else {
		result = h_mid * W;
	}

	if ((H == 1) || (W == 1)) result = 1;

	cout << result << endl;
	return 0;
}
