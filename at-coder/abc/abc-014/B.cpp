#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	int n;
	ll X;
	cin >> n >> X;

	vector<int> a(n+1, 0);
	repeat(i, n) {
		cin >> a[i];
	}
	int result = 0;
	ll x = X;
	int k = 0;
	while(k < n) {
		if (X >> k & 1) {
			result += a[k];
		}
		k++;
	}
	cout << result << endl;
	return 0;
}
