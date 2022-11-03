#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	vector<int> A(N, 0);
	string result = "YES";

	repeat(i, N) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());
	repeat(i, N) {
		if(A[i] == A[i+1]) {
			result = "NO";
			break;
		}
	}

	cout << result << endl;
	return 0;
}
