#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();

int main() {
	int A, B;
	cin >> A >> B;
	vector<int> num{A+B, A-B, A*B};
	auto itr = max_element(num.begin(), num.end());
	int idx = distance(num.begin(), itr);
	cout << num[idx] << endl;
	return 0;
}
