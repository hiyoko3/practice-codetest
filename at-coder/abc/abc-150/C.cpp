#include <bits/stdc++.h>
using namespace std;

int foreach_permutation(int n, string p, string q) {
  int permutation[n];
	int counter = 0, p_index = 0, q_index = 0;
	// 初期化
  for (int i = 0; i < n; i++) {
		permutation[i] = i + 1;
	}

  do {
		ostringstream oss;
		counter++;
		for (int temp = 0; temp < n; temp++) {
	    oss << permutation[temp];
		}
		if (p == oss.str()) p_index = counter;
		if (q == oss.str()) q_index = counter;

		if (p_index != 0 && q_index != 0) break;
  } while (next_permutation(permutation, permutation + n));

	return abs(p_index - q_index);
}

int main() {
	int N;
	cin >> N;

	// N個分の領域確保
	int _i;
	ostringstream p_oss, q_oss;

	// 1回目の入力
	for (int i = 0; i < N; i++) {
    cin >> _i;
		p_oss << _i;
	}

	// 2回目の入力
	for (int i = 0; i < N; i++) {
    cin >> _i;
		q_oss << _i;
	}

  const int result = foreach_permutation(
		N,
		p_oss.str(),
		q_oss.str()
	);
	cout << result << endl;
}