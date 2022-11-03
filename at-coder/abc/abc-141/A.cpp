#include <bits/stdc++.h>
using namespace std;
 
int main() {
	const string weathers[] = { "Sunny", "Cloudy", "Rainy" };
	const int weatherArrSize = sizeof(weathers)/sizeof(weathers[0]);
	string S;
	int resultIdx = 0;
	cin >> S;
	for(int i = 0; i < weatherArrSize; i++) {
		if (S == weathers[i]) {
			resultIdx = (i == weatherArrSize - 1) ? 0 : i + 1;
			break;
		}
	}
	cout << weathers[resultIdx] << endl;
}