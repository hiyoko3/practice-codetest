#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	ll L, R;
	cin >> L >> R;
	
	R = min(R, L+4038);
	ll result = 2018;
	for(ll i = L; i <= R; i++) {
		for(ll  j = i+1; j <= R; j++) {
			ll x = i * j % 2019;
			result = min(result, x);
		}
	}

	cout << result << endl;
	return 0;
}
