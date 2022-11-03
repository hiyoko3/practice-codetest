#include <bits/stdc++.h>
#define repeat(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;



int main() {
	ll N = 3, x2;
	cin >> N;
	vector<ll> A(N, 0), result(N, 0);
	repeat(i, N) {
		cin >> A[i];
		if ((i % 2) == 0) {
			x2 += A[i];
		} else{
			x2 -= A[i];
		}
	}
	result[0] = x2 / 2;
	repeat(i, N - 1) {
		result[i+1] = A[i] - result[i];
	}

	repeat(i, N) {
		result[i] *= 2;
		cout << result[i];
		cout << ((i == N - 1) ? "" : " ");
	}
	cout << endl;
	return 0;
}
