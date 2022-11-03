#include <bits/stdc++.h>
using namespace std;

int main() {
	int result_ac = 0, result_wa = 0;
	int N = 0, M = 0;
	cin >> N >> M;
	vector<bool> ResultState(105000, false);
	vector<int> WrongAnswerCount(105000, 0);

	for (int i = 0; i < M; i++) {
		int question = 0;
		string state;
		cin >> question >> state;
		if (ResultState[question]) continue;

		if (state == "AC") {
			result_ac += 1;
			ResultState[question] = true;
			result_wa += WrongAnswerCount[question];
		}
		if (state == "WA") {
			WrongAnswerCount[question] += 1;
		}
	}

  cout << result_ac << " " << result_wa << endl;
	return 0;
}
