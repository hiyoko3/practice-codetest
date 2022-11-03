#include <bits/stdc++.h>
using namespace std;
 
int main() {
	char a, b;

	cin >> a >> b;

	string a_str = string(b - '0', a);
	string b_str = string(a - '0', b);

	if ( a_str.compare(b_str) < 0) {
		cout << a_str << endl;
	}	else if ( a_str.compare(b_str) > 0) {
		cout << b_str << endl;
	} else {
		cout << a_str << endl;
	}
}