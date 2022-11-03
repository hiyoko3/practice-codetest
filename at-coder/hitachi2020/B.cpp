#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	int A, B, M;
	cin >> A >> B >> M;

	vector<int> a(A, 100000), b(B, 100000);

	repeat(i, A) {
		cin >> a[i];
	}

	repeat (i, B) {
		cin >> b[i];
	}

	int min_a = *min_element(a.begin(), a.end());	
	int min_b = *min_element(b.begin(), b.end());	

	int min = min_a + min_b;

	repeat(i, M) {
		int x, y, c;
		cin >> x >> y >> c;

		if ((a[x-1] + b[y-1] - c) < min) min = (a[x-1] + b[y-1] - c);
	}

	cout << min << endl;
	return 0;
}
