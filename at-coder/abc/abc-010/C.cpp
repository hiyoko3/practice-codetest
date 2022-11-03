#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const double EPS = numeric_limits<double>::epsilon();

int main() {
	int tx1, ty1, tx2, ty2, T, V;
	cin >> tx1 >> ty1 >> tx2 >> ty2 >> T >> V;
	int N;
	cin >> N;

	map<int, int> points;
	string result = "NO";

	repeat(i, N) {
		int x, y;
		cin >> x >> y;
		points.insert(make_pair(x, y));
	}

	for(auto itr : points) {

		double mid1 = sqrt( pow((itr.first-tx1), 2) + pow((itr.second-ty1), 2) );
		double mid2 = sqrt( pow((tx2-itr.first), 2) + pow((ty2-itr.second), 2) );
		if ((mid1 + mid2) <= double(T*V)+EPS) {
			result = "YES";
			break;
		}
	}

	cout << result << endl;
	return 0;
}
