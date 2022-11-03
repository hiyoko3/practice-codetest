#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	int N;
	cin >> N;
	vector<ll> A(N, 0);
	repeat(i, N) {
		cin >> A[i];
	}

	int result = A[0];
	for(int i = 1; i < A.size(); i++) {
		result = gcd(result, A[i]);
	}

	cout << result << endl;
	return 0;
}
