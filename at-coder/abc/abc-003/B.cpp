#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	string S, T;
	string result = "You can win";
	cin >> S;
	cin >> T;

	for(int i = 0; i < S.length(); i++) {
		string s = S.substr(i, 1);
		string t = T.substr(i, 1);

		if (s == t) continue;
		else if (s == "@") {
			if (t == "a" || t == "t" || t == "c" || t == "o" || t == "d" || t == "e" || t == "r" || t == "@") continue;
			else {
				result = "You will lose";
				break;
			}
		}
		else if (t == "@") {
			if (s == "a" || s == "t" || s == "c" || s == "o" || s == "d" || s == "e" || s == "r" || s == "@") continue;
			else {
				result = "You will lose";
				break;
			}
		}
		else {
			result = "You will lose";
			break;
		}
	}

	cout << result << endl;
	return 0;
}
