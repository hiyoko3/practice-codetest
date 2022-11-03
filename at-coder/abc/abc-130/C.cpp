#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	double W, H, x, y;
	cin >> W >> H >> x >> y;

	double S = W * H / 2;
	int is_exist = (int)(x*2 == W && y*2 == H);
	
	cout << fixed << setprecision(10) << S << endl;
	cout << is_exist << endl;
	return 0;
}
