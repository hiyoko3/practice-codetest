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
// 最大公約数
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// char -> int
int ctoi(char c) { return (int)(c - '0'); }

int main() {
	int K, N;
	cin >> K >> N;

	vector<int> a(N, 0);

	ll cost = 0;
	repeat(i, N) {
		cin >> a[i];
	}

	vector<int> diff;
	repeat(i, N-1) {
		diff.push_back( abs(a[i] - a[i+1]) );
	}
	
	diff.push_back( abs( K + a[0] - a[N-1] ) );

	sort(diff.begin(), diff.end());

	repeat(i, N-1) {
		cost += diff[i];
	}
	cout << cost << endl;
	return 0;
}
