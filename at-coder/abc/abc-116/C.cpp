#include <bits/stdc++.h>
#define repeat(i, n) for (ll(i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main()
{
	int N;
	int result = 0;
	/* ここから */
	cin >> N;
	vector<int> H(N, 0), h(N, 0); // H: 目標の高さ, h: 現在の高さ（初期値は高さ0）
	repeat(i, N) {
		cin >> H[i];
	}
	/* ここまでデータの入力 */

	/* ここから */
	bool is_empty = true;
	int start_idx = 0;
	while(is_empty) {
		// 開始地点を決める
		repeat(i, N) {
			if (h[i] < H[i]) {
				start_idx = i;
				break; // ループの強制終了
			}
		}

    // 現在の花にお水を上げる
		for(int i = start_idx; i < N; i++) {
			if (h[i] == H[i]) break; // 現在の花の高さと目標の花の高さが同じような場合があれば強制終了
			h[i] += 1;
		}

		// repeat(i, N) {
		// 	printf("%d ", h[i]);
		// }
		// printf("\n");

		result++; // 水をやった回数

		// 目標の高さと現在の花の高さが一致しているかチェック
		repeat(i, N) {
			if (h[i] == H[i]) is_empty = false;
			else {
				is_empty = true;
				break;
			};
		}
	}

	bool is_zero = true;
	repeat(i, N) {
		if (H[i] != 0) {
			is_zero = false;
			break;
		}
	}
	if (is_zero) result = 0;

	cout << result << endl;
	return 0;
}