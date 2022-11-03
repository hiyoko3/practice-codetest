#include <bits/stdc++.h>
using namespace std;
 
int main() {
	const string VERIFY_WORDS = "ABC";
	int N;
  string S;
	int result = 0;

  // 入力
  cin >> N;
	cin >> S;

	// ループで文字列を検索
	for (int i = 0; i < N; i++) {
		string _part_str = S.substr(i, VERIFY_WORDS.length());
		if (_part_str == VERIFY_WORDS) { result++; }
	}
  // 出力
  cout << result << endl;
}
