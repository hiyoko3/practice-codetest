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
	string S;
	cin >> S;
	int N = S.length();
	int N2 = (N-1)/2;
	int N3 = (N+2)/2;
	string result = "Yes";
	string rS = S;
	reverse(rS.begin(), rS.end());

	repeat(i, N) {
		string s = S.substr(i, 1);
		string rs = rS.substr(i, 1);

		if (s != rs) result = "No";
	}

	string s2 = S.substr(0, N2);
	string rs2 = s2;

	reverse(rs2.begin(), rs2.end());
	repeat(i, N2) {
		string s = s2.substr(i, 1);
		string rs = rs2.substr(i, 1);

		if (s != rs) result = "No";
	}

	string s3 = S.substr(N3, N);
	string rs3 = s3;
	reverse(rs3.begin(), rs3.end());
	repeat(i, N3) {
		string s = s3.substr(i, 1);
		string rs = rs3.substr(i, 1);

		if (s != rs) result = "No";
	}

	cout << result << endl;
	return 0;
}
