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
using mpint = boost::multiprecision::cpp_int; // 多倍長整数（任意精度）
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
// 最大公約数
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// 最小公倍数
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
// char -> int
int ctoi(char c) { return (int)(c - '0'); }

int main() {
	int N;
	cin >> N;
	vector<ll> A(N+1, 0), B(N, 0);

	repeat(i, N+1) {
		cin >> A[i];
	}

	repeat(i, N) {
		cin >> B[i];
	}

	ll result = 0;
	repeat(i, N) {
		if (B[i] < (A[i] + A[i+1])) {
			result += B[i];
		} else {
			result += A[i] + A[i+1];
		}

		if (B[i] > A[i]) {
			ll a = (B[i] - A[i]);

			if (a > A[i+1]) {
				A[i+1] = 0;
			} else if (a > 0) {
				A[i+1] = A[i+1] - a;
			}
		}
	}

	cout << result << endl;
	return 0;
}
