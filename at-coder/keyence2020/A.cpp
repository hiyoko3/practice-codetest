#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int H = 0, W = 0, N = 0;
	int result = 0, calculator = 0, currentVal = 0;
	cin >> H;
	cin >> W;
	cin >> N;

	calculator = (H < W) ? W : H;
	while (currentVal < N) {
		currentVal+=calculator;
		result++;
	}
	cout << result << endl;
}