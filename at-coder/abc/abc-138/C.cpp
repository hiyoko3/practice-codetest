#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	double result = 0.0;
	int N;
	cin >> N;
	vector<int> V(N, 0);

	repeat(i, N) {
		cin >> V[i];
	}

	sort(V.begin(), V.end());

	double middle = 0.0;
	result = middle = (double)(V[0] + V[1]) / 2;
	for (int i = 2; i < N; i++) {
		middle = (middle + V[i]) / 2;
		if (middle > result)
			result = middle;
	}

	cout << fixed << setprecision(5) << result << endl;
	return 0;
}
