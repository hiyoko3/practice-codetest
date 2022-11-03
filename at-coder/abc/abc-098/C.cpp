#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	int N;
	string S;
	cin >> N;
	cin >> S;

	vector<int> e_dir(310000, 0), w_dir(310000, 0);
	for(int i = 2; i <= S.length() + 1; i++) {
		char s = S[i-2];
		int count = 0;
		if (s == 'W') count++;

		e_dir[i-1] = e_dir[i-2] + count;
	}

	for(int i = S.length() - 2; i >= 0; i--) {
		char s = S[i+1];
		int count = 0;
		if (s == 'E') count++;

		w_dir[i] = w_dir[i+1] + count;
	}

	int ans = 300000;
	repeat(i, S.length()) {
		int sum = e_dir[i] + w_dir[i];
		if (sum < ans) ans = sum;
	}

	cout << ans << endl;
	return 0;
}
