#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int H = 0, A = 0;
	int result = 0;
	cin >> H >> A;

	while(H > 0) {
		H -= A;
		result++;
	}

 	cout << result << endl;
	return 0;
}
