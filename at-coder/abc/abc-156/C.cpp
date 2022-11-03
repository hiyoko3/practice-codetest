#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	vector<int> X(N, 0);
	repeat(i, N) {
		cin >> X[i];
	}
	int result = 100000000;

	for(int i = 1; i <= 100; i++) {
		int temp = 0;
		repeat(j, N) {
			temp += (X[j] - i) * (X[j] - i);
		}
		if (temp < result) result = temp;
	}

	cout << result << endl;
	return 0;
}
