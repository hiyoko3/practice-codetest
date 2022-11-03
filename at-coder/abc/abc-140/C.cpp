#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

int main() {
	int result = 0;
	int N = 0;
	cin >> N;

	vector<int> B(N, 0);
	vector<int> Ans(N, 0);

	for (int i = 0; i < N - 1; i++) {
		cin >> B[i];
	}

	Ans[0] = B[0];
	for (int i = 1; i < N - 1; i++) {
		Ans[i] = min(B[i-1], B[i]);
	}
	Ans[N-1] = B[N-2];

 	cout << accumulate(Ans.begin(), Ans.end(), 0) << endl;
	return 0;
}
