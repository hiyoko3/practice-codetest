#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
int main() {
	int N = 0, result = 0, max_R = 0;
	cin >> N;

	vector<int> d(N, 0);

	repeat(i, N) {
		cin >> d[i];
	}

	sort(d.begin(), d.end(), greater<int>());
	max_R = d[0];
	result++;

	repeat(i, N) {
		if (max_R > d[i]) {
			result++;
			max_R = d[i];
		}
	}
	cout << result << endl;
	return 0;
}
