#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

// increment
#define rep_n(_1, _2, _3, NAME, ...) NAME
#define rep_2(i, n) for (int(i) = 0; (i) < (int)(n); ++(i))
#define rep_3(i, initial, n) for (int(i) = (int)(initial); (i) < (int)(n); ++(i))
#define rep(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME, ...) NAME
#define rep_r_2(i, n) for (int(i) = (int)(n); (i) > 0; (i)--)
#define rep_r_3(i, initial, n) for (int(i) = (int)(initial); (i) > (int)(n); (i)--)
#define rep_r(...) rep_r_n(__VA_ARGS__, rep_r_3, rep_r_2)(__VA_ARGS__)
// define type definition
using namespace std;
typedef long long ll;
using mpint = boost::multiprecision::cpp_int; // 多倍長整数（任意精度）
typedef pair<int, int> P;

// define construct variable
const double EPS = numeric_limits<double>::epsilon();
// 10^9 + 7
const ll MOD = ll(1e9)+7;
const ll INF = ll(1e10);
const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
const double PI = acos(-1);

// define methods
// 最大公約数
ll gcd(const ll a, const ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(const ll a, const ll b) { return a / gcd(a, b) * b; }
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
	ll b = MOD, u = 1, v = 0;
	while (b) {
		ll t = a / b;
		a -= t * b;
		swap(a, b);
		u -= t * v;
		swap(u, v);
	}
	u %= MOD;
	if (u < 0) { u += MOD; }
	return u;
}
// 順列
ll permutation(const ll n, const ll m) {
	ll result = 1;
	for (ll i = n; i > n - m; i--) { result = (result * i) % MOD; }
	return result;
}

// 繰り返し n 乗法
ll repeat_square(const ll n, const ll x) {
	if (x == 0) return 1;
	ll res = repeat_square(n, x/2);
	res = res * res % MOD;
	if ((x % 2) == 1) res = res * n % MOD;
  return res;
}
// 組み合わせ nCm
ll combination(ll n, ll m) {
	ll p = permutation(n, m);
	ll div = 1;
	for (ll i = 2; i <= m; i++) {
		div = (div * i) % MOD;
	}
	return (p * modinv(div)) % MOD;
}

// int N, M, X;
// int minval = int(1e5)*12;

// void dfs(vector<int> C, vector< vector<int> > A, vector<int> ans, int temp, int idx){
// 	rep(i, idx, N) {
// 		// 加算
// 		temp += C[i];
// 		rep(j, M) {
// 			ans[j] += A[i][j];
// 		}
		
// 		dfs(C, A, ans, temp, i+1);

// 		// 判定
// 		bool ok = true;
// 		rep(i, M) {
// 			if (ans[i] < X) ok = false;
// 		}
// 		// 最小値更新
// 		if (ok && temp < minval) minval = temp;

// 		// 元に戻す
// 		temp -= C[i];
// 		rep(j, M) {
// 			ans[j] -= A[i][j];
// 		}
// 	}
// }
// int main() {
// 	cin >> N >> M >> X;
// 	vector<int> C(N);
// 	vector< vector<int> > A(N);

// 	rep(i, N) {
// 		cin >> C[i];
// 		A[i].resize(M);

// 		rep(j, M) {
// 			cin >> A[i][j];
// 		}
// 	}

// 	vector<bool> is_ok(N, false);
// 	vector<int> check(M, 0);
// 	rep(i, N) {
// 		rep(j, M) {
// 			check[j] += A[i][j];
// 		}
// 	}
// 	rep(i, M) {
// 		if (check[i] >= X) continue;
// 		cout << "-1" << endl;
// 		return 0;
// 	}

// 	dfs(C, A, vector<int>(M, 0), 0, 0);
// 	cout << minval << endl;
//   return 0;
// }

// 別解 bit 全探索
int main() {
	int N, M ,X;
	cin >> N >> M >> X;

	vector<int> C(N);
	vector< vector<int> > A(N);

	rep(i, N) {
		cin >> C[i];
		A[i].resize(M);

		rep(j, M) {
			cin >> A[i][j];
		}
	}

	int ans = 1001001001;
	// 1 << 3 => 0001 << 3 => 1000 = 8
	rep(s, 1<<N) {
		int cost = 0;
		vector<int> d(M);
		rep(i, N) {
			if(s >> i & 1) {
				cost += C[i];
				rep(j, M) {
					d[j] += A[i][j];
				}
			}
		}

		bool ok = true;
		rep(j, M) {
			if (d[j] < X) ok = false;
		}

		if (ok) ans = min({ans, cost});
	}

	if (ans == 10010010) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}