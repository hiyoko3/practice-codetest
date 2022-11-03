#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int result = 0, N = 0;
	cin >> N;
	vector<int> d(N, 0);

	for(int i = 0; i < N; i++) {
		cin >> d[i];
	}

	sort(d.begin(), d.end());
	int K_min = (N / 2) - 1;

	for(int i = d[K_min]; i < d[K_min+1]; i++) {
		result += 1;
	}

 	cout << result << endl;
	return 0;
}
