#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int H = 0, N = 0;
	int result = 0;
	cin >> H >> N;
	vector<int> A(N);

	for(int i = 0; i < N; i++) {
		cin >> A[i];
	}

	result = accumulate(A.begin(), A.end(), 0);
 	cout << ((result >= H) ? "Yes" : "No") << endl;
	return 0;
}
