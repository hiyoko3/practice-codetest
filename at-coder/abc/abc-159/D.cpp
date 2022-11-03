#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

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
using mpint = boost::multiprecision::cpp_int; // 多倍長整数（任意精度）
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
const long long INF = (long long)1e18;
// 最大公約数
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// char -> int
int ctoi(char c) { return (int)(c - '0'); }

int main() {
	int N;
	cin >> N;
	vector<ll> A(N, 0);
	map<ll, ll> m;

	repeat(i, N) {
		ll a;
		cin >> a;
		A[i] = a;
		m[a]++;
	}

	ll sum = 0;
	for(auto it: m) {
		sum += (it.second * (it.second - 1)) / 2;
	}

	repeat(i, N) {
		ll a = A[i];

		ll diff1 = m[a] * (m[a] - 1) / 2;

		m[a]--;

		ll diff2 = m[a] * (m[a] - 1) / 2;

		cout << (sum - diff1 + diff2) << endl;
		m[a]++;
	}

	return 0;
}
