#include <bits/stdc++.h>
#define repeat(i, n) for(int (i) = 0; i < (n); i++)
using namespace std;
typedef long long ll;
const double EPS = numeric_limits<double>::epsilon();
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main() {
	map<int, int> A1;
	int n1, m1, l1, n2, m2, l2, n3, m3, l3;
	cin >> n1 >> m1 >> l1;
	A1[n1] = 0;
	A1[m1] = 0;
	A1[l1] = 0;

	cin >> n2 >> m2 >> l2;
	A1[n2] = 0;
	A1[m2] = 0;
	A1[l2] = 0;

	cin >> n3 >> m3 >> l3;
	A1[n3] = 0;
	A1[m3] = 0;
	A1[l3] = 0;
	int N;
	cin >> N;

	string result = "No";

	repeat(i, N) {
		int d = 0;
		cin >> d;
		A1[d]++;
	}

	auto x1 = A1.at(n1);
	auto y1 = A1.at(m1);
	auto z1 = A1.at(l1);

	auto x2 = A1.at(n2);
	auto y2 = A1.at(m2);
	auto z2 = A1.at(l2);

	auto x3 = A1.at(n3);
	auto y3 = A1.at(m3);
	auto z3 = A1.at(l3);
	if (x1 >= 1 && y1 >= 1 && z1 >= 1) {
		result = "Yes";
	}
	if (x2 >= 1 && y2 >= 1 && z2 >= 1) {
		result = "Yes";
	}
	if (x3 >= 1 && y3 >= 1 && z3 >= 1) {
		result = "Yes";
	}

	if (x1 >= 1 && y2 >= 1 && z3 >= 1) {
		result = "Yes";
	}
	if (x3 >= 1 && y2 >= 1 && z1 >= 1) {
		result = "Yes";
	}

	if (x1 >= 1 && x2 >= 1 && x3 >= 1) {
		result = "Yes";
	}
	if (y1 >= 1 && y2 >= 1 && y3 >= 1) {
		result = "Yes";
	}
	if (z1 >= 1 && z2 >= 1 && z3 >= 1) {
		result = "Yes";
	}

	cout << result << endl;
	return 0;
}
