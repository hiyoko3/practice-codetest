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

	if (S == "AAA" || S == "BBB") {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
	return 0;
}
