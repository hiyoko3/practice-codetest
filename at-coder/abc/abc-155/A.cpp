#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	string result = "No";

	if (a == b || b == c || a == c) result = "Yes";
	if (a == b && b == c) result = "No";
	cout << result << endl;
	return 0;
}
