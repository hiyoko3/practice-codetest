#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	map<string, ll> m;
	string s;
	ll result = 0;

	repeat(i, N) {
		cin >> s;
		sort(s.begin(), s.end());
		m[s] += 1;
	}

	for(auto& p : m) {
		ll count = p.second;
		result += count * (count-1) / 2;
  }

	cout << result << endl;
	return 0;
}
