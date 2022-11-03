#include <bits/stdc++.h>
#define repeat(i, n) for(ll (i) = 0; (i) < (n); (i)++)
using namespace std;
typedef long long ll;

int main() {
	string ABCD = "", result = "";
	cin >> ABCD;

	int A = ABCD[0] - '0';
	int B = ABCD[1] - '0';
	int C = ABCD[2] - '0';
	int D = ABCD[3] - '0';
	bool is_exist = false, op_1, op_2, op_3;
	bool operators[] = {true, false};
	int size = sizeof(operators) / sizeof(operators[0]);
	int sum = 0;
	const int ANSWER = 7;

	repeat(i, size) {
	 	op_1 = operators[i];
		repeat(j, size) {
			op_2 = operators[j];
			repeat(k, size) {
				op_3 = operators[k];

				sum = (op_1) ? A + B : A - B;
				sum = (op_2) ? sum + C : sum - C;
				sum = (op_3) ? sum + D : sum - D;
				if (sum == ANSWER) is_exist = true;
				if (is_exist) break;
			}
			if (is_exist) break;
		}
		if (is_exist) break;
	}
	cout << ABCD[0];
	cout << (op_1 ? "+" : "-");
	cout << ABCD[1];
	cout << (op_2 ? "+" : "-");
	cout << ABCD[2];
	cout << (op_3 ? "+" : "-");
	cout << ABCD[3];
	cout << "=7" << endl;
	return 0;
}
