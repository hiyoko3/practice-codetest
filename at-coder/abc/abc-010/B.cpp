#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
	int N;
	cin >> N;
	vector<ll> A(N, 0);
	repeat(i, N) {
		cin >> A[i];
	}
	int result = 0;
	vector<int> passList = {1,3,7,9};

	repeat(i, A.size()) {
		for(int j = A[i]; j > 0; j--) {
			auto itr = find(passList.begin(), passList.end(), j);
			if (itr == passList.end()) {
				result++;
			} else {
				break;
			}
		}
	}
	cout << result << endl;
	return 0;
}
