#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	vector<string> comb{
		"213456",
		"231456",
		"234156",
		"234516",
		"234561",

		"324561",
		"342561",
		"345261",
		"345621",
		"345612",

		"435612",
		"453612",
		"456312",
		"456132",
		"456123",

		"546123",
		"564123",
		"561423",
		"561243",
		"561234",

		"651234",
		"615234",
		"612534",
		"612354",
		"612345",

		"162345",
		"126345",
		"123645",
		"123465",
		"123456",
	};
	ll N;
	cin >> N;

	int result = (N % 30) - 1;
	if (result == -1) result = comb.size() - 1;
	cout << (comb[result]) << endl;	
	return 0;
}
