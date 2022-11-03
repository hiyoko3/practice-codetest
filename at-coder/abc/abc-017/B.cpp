#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;


int main() {
	string S;
	cin >> S;
	string result = "NO";
	string choku = "choku";

	int idx = S.find(choku);

	if (idx != string::npos) {
		int choku_len = choku.length();
		char n1 = S[choku_len];
		string n2 = S.substr(choku_len, 2);
		if (n1 == 'o' || n1 == 'k' || n1 == 'u' || n2 == "ch") result = "YES";
	} else {
		if (S == "o" || S == "k" || S == "s" || S == "ch") result = "YES";
	}
	cout << result << endl;
	return 0;
}
