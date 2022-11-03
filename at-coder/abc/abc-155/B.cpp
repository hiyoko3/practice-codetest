#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	int N;
	cin >> N;
	vector<int> A(1100, 0);
	string result = "APPROVED";

	repeat(i, N) {
		cin >> A[i];
	}

	repeat(i, N) {
		if (A[i] % 2 == 0 && (A[i] % 3 != 0 && A[i] % 5 != 0)) {
			result = "DENIED";
		}
	}

	cout << result << endl;
	return 0;
}
