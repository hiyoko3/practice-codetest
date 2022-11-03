#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll solve(ll h) {
	if (h <= 1) return 1;
	
	return 2 * solve(h/2) + 1;
}

int main() {
	ll result = 1, H = 0;

	cin >> H;
	

 	cout << solve(H) << endl;
	return 0;
}
