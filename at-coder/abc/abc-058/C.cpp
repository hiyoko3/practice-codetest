#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

// increment
#define rep_n(_1, _2, _3, NAME, ...) NAME
#define rep_2(i, n) for (int (i) = 0; (i) < (int)(n); ++(i))
#define rep_3(i, initial, n) for (int (i) = (int)(initial); (i) < (int)(n); ++(i))
#define repeat(...) rep_n(__VA_ARGS__, rep_3, rep_2, rep_1)(__VA_ARGS__)
// decrement
#define rep_r_n(_1, _2, _3, NAME, ...) NAME
#define rep_r_2(i, n) for (int (i) = (int)(n); (i) > 0; (i)--)
#define rep_r_3(i, initial, n) for (int (i) = (int)(initial); (i) > (int)(n); (i)--)
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
// 素因数分解
vector< pair<ll, ll> > prime_factorize(ll n) {
	vector< pair<ll, ll> > p;
	for(ll i = 2; i*i <= n; i++) {
		if ((n % i) != 0) continue;
		p.push_back(make_pair(i, 0));
		while((n % i) == 0) {
			n /= i;
			p[i].second += 1;
		}
		p.push_back(make_pair(n, 0));
	}

	if (n != 1) p.push_back(make_pair(n, 1));
	return p;
}
string alphabet() { return "abcdefghijklmnopqrstuvwxyz"; }

int main() {
	int n = 0;
	cin >> n;
	map<int, map<string, int> > m;
	repeat(i, n) {
		string S = "";
		cin >> S;

		map<string, int> m1;
		for(int j = 0; j < S.length(); j++) {
			string s = S.substr(j, 1);
			m1[s] += 1;
		}

		m[i] = m1;
	}

	string alpha = alphabet();
	string result = "";
	repeat(i, alpha.length()) {
		string s = alpha.substr(i, 1);

		vector<int> num(n, 0);
		for(int j = 0; j < n; j++) {
			num[j] = m[j][s];
		}

		int max_num = *min_element(num.begin(), num.end());
		if (max_num < 1) continue;

		for(int j = 0; j < max_num; j++) {
			result += s;
		}
	}

	cout << result << endl;
	return 0;
}