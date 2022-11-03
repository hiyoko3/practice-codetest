#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	int N;
	cin >> N;
	map<string, int> list;
	vector<string> strs(N, "");

	repeat(i, N) {
		string s;
		cin >> s;
		strs[i] = s;
	}

	sort(strs.begin(), strs.end());
	int count = 1, max = 1;
	list[strs[0]] = count;
	for(int i = 1; i < N; i++) {
		if (strs[i-1] == strs[i]) {
			count++;
		} else {
			count = 1;
		}
		list[strs[i]] = count;
		if (count > max) max = count;
	}
	string prevStr = "";
	repeat(i, N) {
		if (max == list[ strs[i] ] && prevStr != strs[i]) {
			prevStr = strs[i];
			cout << strs[i] << endl;
		}
	}
	return 0;
}
