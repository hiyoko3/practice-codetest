#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
	int N;
	cin >> N;
	map<string, int> votes;
	repeat(i, N) {
		string s = "";
		cin >> s;
		votes[s] += 1;
	}

	int max = 0;
	string result = "";
	for(auto itr : votes) {
		if (max < itr.second) {
			max = itr.second;
			result = itr.first;
		}
	}

	cout << result << endl;
	return 0;
}
