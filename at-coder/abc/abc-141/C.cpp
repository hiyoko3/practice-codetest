#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int N = 0, Q = 0;
	int K = 0;
	cin >> N >> K >> Q;

	vector<int> A(N, K);
	vector<int> Stacks(N, 0);

	for(int i = 1; i <= Q; i++) {
		int answerer = 0;
		cin >> answerer;
		Stacks[answerer - 1] += 1;
	}

	for(int i = 0; i < N; i++) {
		A[i] = K - (Q - Stacks[i]);
 	  cout << ((A[i] > 0) ? "Yes" : "No") << endl;
	}

	return 0;
}
