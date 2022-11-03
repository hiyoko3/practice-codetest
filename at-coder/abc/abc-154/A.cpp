#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	string S, T, U;
	int A, B;
	cin >> S >> T;
	cin >> A >> B;
	cin >> U;

	if (S == U) A--;
	else B--;
	cout << A << endl;
	cout << B << endl;
	return 0;
}
