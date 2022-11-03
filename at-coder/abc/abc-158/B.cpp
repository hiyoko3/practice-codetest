#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	ll N, A, B;
	cin >> N >> A >> B;

	ll a = N / (A+B);
	ll b = N % (A+B);
	
	ll result = 0;
	result += a*A;

	if ( b <= A) {
		result += b;
	} else {
		result += A;
	}

	cout << result << endl;
	return 0;
}
