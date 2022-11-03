#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }

ll f(ll x, ll c, ll d) {
	ll result = x;
	result -= x / c;
	result -= x / d;
	result += x / lcm(c, d);
	return result;
}

int main() {
	ll A, B, C, D;
	cin >> A >> B >> C >> D;

	ll result = f(B, C, D) - f(A-1, C, D);

	cout << result << endl;
	return 0;
}
