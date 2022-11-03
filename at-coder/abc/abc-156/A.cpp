#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int N, R;
	cin >> N >> R;
	int result = 0;

	if (N < 10) {
		result = 100 * (10 - N);
	}

	result += R;
	

	cout << result << endl;
	return 0;
}
