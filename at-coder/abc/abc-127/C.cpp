#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
#define to_i(c) ((c) - '0');
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> door(110000, 0), l(110000, 0), r(110000, 0);
	int result = 0;

	repeat(i, M) {
		cin >> l[i] >> r[i];
	}
	int min = 0, max = 100000;
	repeat(i, M) {
		if (min <= l[i]) min = l[i];
		if (r[i] <= max) max = r[i];
	}
	result = max - min + 1;
	if (result < 0) result = 0;

	cout << result << endl;
	return 0;
}
