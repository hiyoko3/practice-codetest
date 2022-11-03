#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	int A, B;
	cin >> A >> B;

	int result = -1;

	repeat(i, 2000) {
		int a = (i+1) * 0.08;
		int b = (i+1) * 0.1;
		if (a == A && b == B) {
			result = i + 1;
			break;
		}
	}

	cout << result << endl;
	return 0;
}
