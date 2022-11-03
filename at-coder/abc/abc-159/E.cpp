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
	int H, W, K;
	cin >> H >> W >> K;

	vector<int> h(H, 0);
	vector<int> w(W, 0);

	repeat(i, H) {
		int sumH = 0;
		string s = "";
		cin >> s;
		for(int j = 0; j < W; j++) {
			int x = ctoi(s[j]);
			sumH += x;
			w[j] += x;
		}

		h[i] += sumH;
	}

	int stack = accumulate(h.begin(), h.end(), 0);
	int resultH = 0, indexW = 0;
	repeat(i, H) {
		if (stack <= K) break;

		if (h[i] <= K) {
			stack -= h[i];
		} else {
			int min = 10000;
			for(int j = indexW; j < W; j++) {
				if (w[j] < min) {
					min = w[j];
					indexW = j;
				}
			}
			stack -= min;
		}
		resultH++;
	}

	stack = accumulate(w.begin(), w.end(), 0);
	int resultW = 0, indexH = 0;
	repeat(i, W) {
		if (stack <= K) break;

		if (w[i] <= K) {
			stack -= w[i];
		} else {
			int min = 10000;
			for(int j = indexH; j < H; j++) {
				if (h[j] < min) {
					min = h[j];
					indexH = j;
				}
			}
			stack -= min;
		}
		resultW++;
	}

	int result = (resultH < resultW) ? resultH : resultW;

	cout << resultH << endl;
	return 0;
}
