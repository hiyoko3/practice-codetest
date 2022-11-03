#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	string s;
	int K;
	cin >> s;
	cin >> K;

	map<string, int> dic;

	for(int i = 0; i < s.length(); i++) {
		string a = s.substr(i, s.length());
		auto itr = dic.find(a);

		string end;
		int idx = 0;

		for(auto it: dic) {
			if (idx == K-1) {
				end = it.first;
				break;
			}
			idx++;
		}

		if (dic.size() > 5 && end.compare(a) < 0) continue;
		if (itr != dic.end()) continue;

		for(int j = 1; j <= s.length() - i; j++) {
			string a = s.substr(i, j);
			auto itr = dic.find(a);
			dic[a]++;
		}
	}

	int idx = 0;
	for(auto it: dic) {
		if (idx == K-1) {
			cout << it.first << endl;
		}
		idx++;
	}
	return 0;
}
