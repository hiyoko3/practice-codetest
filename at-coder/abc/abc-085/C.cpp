#include <bits/stdc++.h>
#define repeat(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int N, Y, x = 0, y = 0, z = 0;
bool get_calc() {
	return (x * 10000 + y * 5000 + z * 1000) == Y && (x + y + z) == N;
}

int main() {
	bool is_exist = false;
	cin >> N >> Y;
	
	for(int i = 0; i <= N; i++) {
		for(int j = 0; j <= N - i; j++) {
			for(int k = 0; k <= N - i - j; k++) {
				is_exist = get_calc();
				if (is_exist) break;
				z++;
			}
			if (is_exist) break;
			z = 0;
			y++;
		}
		if (is_exist) break;
		y = 0;
		x++;
	}

	if (!is_exist) {
		x = y = z = -1;
	}
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	return 0;
}
