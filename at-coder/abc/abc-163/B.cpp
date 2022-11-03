#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

// increment
#define rep_n(_1, _2, _3, NAME, ...) NAME
#define rep_2(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define rep_3(i, initial, n) for (int(i) = (int)(initial); (i) < (int)(n); ++(i))
#define repeat(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME, ...) NAME
#define rep_r_2(i, n) for (int(i) = (int)(n); (i) > 0; (i)--)
#define rep_r_3(i, initial, n) for (int(i) = (int)(initial); (i) > (int)(n); (i)--)
#define repeat_r(...) rep_r_n(__VA_ARGS__, rep_r_3, rep_r_2)(__VA_ARGS__)
// define type definition
using namespace std;
typedef long long ll;
using mpint = boost::multiprecision::cpp_int; // 多倍長整数（任意精度）
typedef pair<int, int> P;

// define construct variable
const double EPS = numeric_limits<double>::epsilon();
// 10^9 + 7
const ll BIG_MOD = ll(1e9)+7;
const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";

// define methods
// 最大公約数
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// char -> int
int ctoi(char c) { return (int)(c - '0'); }
// 素因数分解
vector< pair<ll, ll> > prime_factorize(ll n) {
  vector< pair<ll, ll> > p;
  for (ll i = 2; i * i <= n; i++) {
    if ((n % i) != 0) continue;
    p.push_back(make_pair(i, 0));
    while ((n % i) == 0) {
      n /= i;
      p[i].second += 1;
    }
    p.push_back(make_pair(n, 0));
  }

  if (n != 1) p.push_back(make_pair(n, 1));
  return p;
}
// 組み合わせの整合性を保つ（後ほど解析する）
ll modinv(ll a) {
	ll b = BIG_MOD, u = 1, v = 0;
	while (b) {
		ll t = a / b;
		a -= t * b;
		swap(a, b);
		u -= t * v;
		swap(u, v);
	}
	u %= BIG_MOD;
	if (u < 0) { u += BIG_MOD; }
	return u;
}
// 順列
ll permutation(ll n, ll m) {
	ll result = 1;
	for (ll i = n; i > n - m; i--) { result = (result * i) % BIG_MOD; }
	return result;
}
// 組み合わせ
ll combination(ll n, ll m) {
	ll p = permutation(n, m);
	ll div = 1;
	for (ll i = 2; i <= m; i++) { div = (div * i) % BIG_MOD; }
	return (p * modinv(div)) % BIG_MOD;
}

int main() {
	int N, M;
	cin >> N >> M;

	repeat(i, M) {
		int n = 0;
		cin >> n;
		N -= n;
	}
	if (N < 0) N = -1;

	cout << N << endl;
  return 0;
}
