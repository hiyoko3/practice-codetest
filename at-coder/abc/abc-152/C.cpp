#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int N, result = 0;
	cin >> N;
	vector<int> P(N);

	int min = N;
	for (int i = 0; i < N; i++) {
		cin >> P[i];
		if (P[i] <= min) {
			min = P[i];
			result += 1;
			continue;
		}
	}

	cout << result << endl;
}