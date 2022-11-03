#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	int N, M;
	cin >> N >> M;
	string result = "";
	vector<P> list(M);

	repeat(i, M) {
		cin >> list[i].first >> list[i].second;
	}

	repeat(i, 1000) {
		string str = to_string(i);
		bool is_exist = true;
		result = "-1";

		// 桁数と合っていなければ次の数値へ
		if (str.length() != N) continue;

		repeat(j, M) {
			// s桁目の数値とcの値を比較する
			string s = str.substr(list[j].first - 1, 1);
			string x = to_string(list[j].second);
			if (s != x) is_exist = false;
		}

		// 存在していれば結果を更新
		if (is_exist) {
			result = str;
			break;
		}
	}

	if (N == 1 && M == 0) result = "0";

	cout << result << endl;
	return 0;
}
