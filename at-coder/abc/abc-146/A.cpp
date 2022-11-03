#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	vector<string> week{"SUN","MON","TUE","WED","THU","FRI","SAT"};
	string S;
	cin >> S;
	auto itr = find(week.begin(), week.end(), S);
	int idx = distance(week.begin(), itr);
	cout << 7 - idx << endl;
	return 0;
}
