#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	string S;
	cin >> S;

	bool is_hitachi = true;
	for(int i = 0; i < S.length(); i += 2) {
		string s = S.substr(i, 2);
		if (s != "hi") {
			is_hitachi = false;
		}
	}

	cout << ( (is_hitachi) ? "Yes" : "No" ) << endl;
	return 0;
}
